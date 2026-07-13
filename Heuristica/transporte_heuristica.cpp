#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 20;
const double EPS = 1e-9;

int numFilas, numCols;
double costo[MAX][MAX], oferta[MAX], demanda[MAX], asignacion[MAX][MAX];
bool filaActiva[MAX], colActiva[MAX];

double maximo(double valores[], bool activos[]) {
    double mejor = -1;
    for (int i = 0; i < (numFilas > numCols ? numFilas : numCols); i++)
        if (activos[i] && valores[i] > mejor) mejor = valores[i];
    return mejor;
}

int indicesMax(double valores[], bool activos[], double maximo, int indices[]) {
    int cantidad = 0;
    for (int i = 0; i < (numFilas > numCols ? numFilas : numCols); i++)
        if (activos[i] && valores[i] > maximo - EPS && valores[i] < maximo + EPS)
            indices[cantidad++] = i;
    return cantidad;
}

void elegirCelda(int candFilas[], int numCandFilas, int candCols[], int numCandCols, int& mejorFila, int& mejorCol) {
    mejorFila = candFilas[0]; mejorCol = candCols[0];
    double menorCosto = costo[mejorFila][mejorCol], mejorSuma = 0;
    for (int a = 0; a < numCandFilas; a++) {
        double sumaFila = 0;
        for (int j = 0; j < numCols; j++)
            if (colActiva[j]) sumaFila += costo[candFilas[a]][j];
        for (int b = 0; b < numCandCols; b++) {
            int i = candFilas[a], j = candCols[b];
            if (costo[i][j] < menorCosto - EPS ||
                (costo[i][j] < menorCosto + EPS && sumaFila > mejorSuma + EPS)) {
                menorCosto = costo[i][j]; mejorSuma = sumaFila;
                mejorFila = i; mejorCol = j;
            }
        }
    }
}

bool hayTrabajo() {
    for (int i = 0; i < numFilas; i++) if (filaActiva[i] && oferta[i] > EPS) return true;
    for (int j = 0; j < numCols; j++) if (colActiva[j] && demanda[j] > EPS) return true;
    return false;
}

void mostrarTabla() {
    cout << "      ";
    for (int j = 0; j < numCols; j++) cout << "  D" << j+1 << "   ";
    cout << "  of\n";
    for (int i = 0; i < numFilas; i++) {
        cout << "O" << i+1 << "  ";
        for (int j = 0; j < numCols; j++) {
            if (!filaActiva[i] || !colActiva[j]) cout << "   x    ";
            else if (asignacion[i][j] > EPS) cout << asignacion[i][j] << "(" << costo[i][j] << ")  ";
            else cout << "-(" << costo[i][j] << ")  ";
        }
        cout << oferta[i] << (filaActiva[i] ? "" : " [out]") << "\n";
    }
    cout << "dem ";
    for (int j = 0; j < numCols; j++)
        cout << " " << demanda[j] << (colActiva[j] ? "  " : "[out] ");
    cout << "\n";
}

void mostrarResultado(double costoTotal) {
    cout << "\n--- Resultado ---\n";
    for (int i = 0; i < numFilas; i++)
        for (int j = 0; j < numCols; j++)
            if (asignacion[i][j] > EPS)
                cout << "O"<<i+1<<"->D"<<j+1<<" = "<<asignacion[i][j]
                     <<" (c="<<costo[i][j]<<", costo="<<asignacion[i][j]*costo[i][j]<<")\n";
    cout << "COSTO TOTAL = " << costoTotal << "\n\n";

    cout << "--- Tabla final (cant | c) ---\n      ";
    for (int j = 0; j < numCols; j++) cout << "    D" << j+1 << "   ";
    cout << "\n";
    for (int i = 0; i < numFilas; i++) {
        cout << "O" << i+1 << "   ";
        for (int j = 0; j < numCols; j++) {
            if (asignacion[i][j] > EPS) cout << asignacion[i][j] << "(" << costo[i][j] << ")  ";
            else cout << "-(" << costo[i][j] << ")  ";
        }
        cout << "\n";
    }
}

void resolver() {
    for (int i = 0; i < numFilas; i++) {
        filaActiva[i] = true;
        for (int j = 0; j < numCols; j++) asignacion[i][j] = 0;
    }
    for (int j = 0; j < numCols; j++) colActiva[j] = true;

    cout << "\n--- Datos ---\n";
    for (int i = 0; i < numFilas; i++) {
        for (int j = 0; j < numCols; j++) cout << costo[i][j] << " ";
        cout << "| of=" << oferta[i] << "\n";
    }
    cout << "dem: ";
    for (int j = 0; j < numCols; j++) cout << demanda[j] << " ";
    cout << "\n";

    double costoTotal = 0;
    int iteracion = 0;

    while (hayTrabajo()) {
        iteracion++;
        double maxOferta = maximo(oferta, filaActiva);
        double maxDemanda = maximo(demanda, colActiva);
        int candFilas[MAX], candCols[MAX];
        int numCandFilas = indicesMax(oferta, filaActiva, maxOferta, candFilas);
        int numCandCols = indicesMax(demanda, colActiva, maxDemanda, candCols);

        cout << "\n=== Iter " << iteracion << " ===\n";
        mostrarTabla();
        cout << "Paso 1: max oferta=" << maxOferta << " | max demanda=" << maxDemanda << "\n";

        int i, j;
        if (numCandFilas == 1 && numCandCols == 1) {
            i = candFilas[0]; j = candCols[0];
            cout << "Paso 2: Regla C -> O"<<i+1<<"-D"<<j+1<<" (c="<<costo[i][j]<<")\n";
        } else {
            elegirCelda(candFilas, numCandFilas, candCols, numCandCols, i, j);
            string regla = (numCandFilas == 1) ? "A (empate demandas)" : (numCandCols == 1) ? "B (empate ofertas)" : "Cruzado (menor costo)";
            cout << "Paso 2: Regla " << regla << " -> O"<<i+1<<"-D"<<j+1<<" (c="<<costo[i][j]<<")\n";
        }

        double cantidadAsignar = min(oferta[i], demanda[j]);
        cout << "Paso 3: asignar " << cantidadAsignar << "\n";

        asignacion[i][j] += cantidadAsignar;
        oferta[i] -= cantidadAsignar;
        demanda[j] -= cantidadAsignar;
        costoTotal += cantidadAsignar * costo[i][j];
        cout << "Paso 4: of O"<<i+1<<"="<<oferta[i]<<" | dem D"<<j+1<<"="<<demanda[j]<<"\n";

        if (oferta[i] <= EPS) oferta[i] = 0;
        if (demanda[j] <= EPS) demanda[j] = 0;

        bool ofertaEnCero = oferta[i] <= EPS;
        bool demandaEnCero = demanda[j] <= EPS;

        if (ofertaEnCero && demandaEnCero) {
            filaActiva[i] = false;
            cout << "Caso degen: se elimina fila O" << i+1 << "\n";
        } else {
            if (ofertaEnCero) filaActiva[i] = false;
            if (demandaEnCero) colActiva[j] = false;
        }
    }

    mostrarResultado(costoTotal);
}

bool leerArchivo(const char* nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo) { cout << "No se pudo abrir " << nombreArchivo << "\n"; return false; }
    archivo >> numFilas >> numCols;
    for (int i = 0; i < numFilas; i++)
        for (int j = 0; j < numCols; j++)
            archivo >> costo[i][j];
    for (int i = 0; i < numFilas; i++) archivo >> oferta[i];
    for (int j = 0; j < numCols; j++) archivo >> demanda[j];
    return true;
}

bool leerTeclado() {
    cout << "Filas Columnas: "; cin >> numFilas >> numCols;
    cout << "Costos (" << numFilas << "x" << numCols << "):\n";
    for (int i = 0; i < numFilas; i++)
        for (int j = 0; j < numCols; j++)
            cin >> costo[i][j];
    cout << "Ofertas (" << numFilas << "):\n";
    for (int i = 0; i < numFilas; i++) cin >> oferta[i];
    cout << "Demandas (" << numCols << "):\n";
    for (int j = 0; j < numCols; j++) cin >> demanda[j];
    return true;
}

int main() {
    cout << "Heuristica Mayor Oferta x Mayor Demanda\n";
    cout << "1) Teclado  2) Archivo\nOpcion: ";
    int opcion; cin >> opcion;

    bool exito = false;
    if (opcion == 1) exito = leerTeclado();
    else if (opcion == 2) { char nombre[200]; cout << "Archivo: "; cin >> nombre; exito = leerArchivo(nombre); }
    if (!exito) return 1;

    double sumaOfertas = 0, sumaDemandas = 0;
    for (int i = 0; i < numFilas; i++) sumaOfertas += oferta[i];
    for (int j = 0; j < numCols; j++) sumaDemandas += demanda[j];
    if (sumaOfertas < sumaDemandas - EPS || sumaOfertas > sumaDemandas + EPS) {
        cout << "No hay equilibrio: oferta=" << sumaOfertas << " demanda=" << sumaDemandas << "\n";
        return 1;
    }

    resolver();
}
