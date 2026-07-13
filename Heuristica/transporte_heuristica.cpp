#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 20;
const double EPS = 1e-9;

int m, n;
double c[MAX][MAX];      // costos
double of[MAX], dem[MAX]; // residuales
double x[MAX][MAX];      // asignaciones
bool filaOK[MAX], colOK[MAX];

double maxOferta() {
    double mx = -1;
    for (int i = 0; i < m; i++)
        if (filaOK[i] && of[i] > mx) mx = of[i];
    return mx;
}

double maxDemanda() {
    double mx = -1;
    for (int j = 0; j < n; j++)
        if (colOK[j] && dem[j] > mx) mx = dem[j];
    return mx;
}

// Cuenta y guarda indices con valor max
int filasMax(double mx, int idx[]) {
    int k = 0;
    for (int i = 0; i < m; i++)
        if (filaOK[i] && of[i] > mx - EPS && of[i] < mx + EPS)
            idx[k++] = i;
    return k;
}

int colsMax(double mx, int idx[]) {
    int k = 0;
    for (int j = 0; j < n; j++)
        if (colOK[j] && dem[j] > mx - EPS && dem[j] < mx + EPS)
            idx[k++] = j;
    return k;
}

// Entre candidatos (nFil x nCol), elige menor costo
void menorCosto(int fil[], int nFil, int col[], int nCol, int& bi, int& bj) {
    bi = fil[0];
    bj = col[0];
    double minC = c[bi][bj];
    for (int a = 0; a < nFil; a++) {
        for (int b = 0; b < nCol; b++) {
            int i = fil[a], j = col[b];
            if (c[i][j] < minC) {
                minC = c[i][j];
                bi = i;
                bj = j;
            }
        }
    }
}

bool quedaTrabajo() {
    for (int i = 0; i < m; i++)
        if (filaOK[i] && of[i] > EPS) return true;
    for (int j = 0; j < n; j++)
        if (colOK[j] && dem[j] > EPS) return true;
    return false;
}

// Tabla actual: cant(c) o -(c); of/dem residuales
void mostrarTabla() {
    cout << "      ";
    for (int j = 0; j < n; j++) cout << "  D" << j + 1 << "   ";
    cout << "  of\n";
    for (int i = 0; i < m; i++) {
        cout << "O" << i + 1 << "  ";
        for (int j = 0; j < n; j++) {
            if (!filaOK[i] || !colOK[j])
                cout << "   x    ";
            else if (x[i][j] > EPS)
                cout << x[i][j] << "(" << c[i][j] << ")  ";
            else
                cout << "-(" << c[i][j] << ")  ";
        }
        cout << of[i];
        if (!filaOK[i]) cout << " [out]";
        cout << "\n";
    }
    cout << "dem ";
    for (int j = 0; j < n; j++) {
        cout << " " << dem[j];
        if (!colOK[j]) cout << "[out]";
        cout << "  ";
    }
    cout << "\n";
}

void resolver() {
    for (int i = 0; i < m; i++) {
        filaOK[i] = true;
        for (int j = 0; j < n; j++) x[i][j] = 0;
    }
    for (int j = 0; j < n; j++) colOK[j] = true;

    cout << "\n--- Datos ---\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << c[i][j] << " ";
        cout << "| of=" << of[i] << "\n";
    }
    cout << "dem: ";
    for (int j = 0; j < n; j++) cout << dem[j] << " ";
    cout << "\n";

    int paso = 0;
    double total = 0;

    while (quedaTrabajo()) {
        paso++;
        double maxO = maxOferta();
        double maxD = maxDemanda();

        int F[MAX], C[MAX];
        int nF = filasMax(maxO, F);
        int nC = colsMax(maxD, C);

        cout << "\n=== Iter " << paso << " ===\n";
        mostrarTabla();
        cout << "Paso 1: max oferta=" << maxO << " | max demanda=" << maxD << "\n";

        int i, j;

        // Paso 2: reglas de empate
        if (nF == 1 && nC == 1) {
            // Regla C: interseccion
            i = F[0];
            j = C[0];
            cout << "Paso 2: Regla C -> O" << i + 1 << "-D" << j + 1
                 << " (c=" << c[i][j] << ")\n";
        } else if (nF == 1 && nC > 1) {
            // Regla A: empate en demandas
            menorCosto(F, nF, C, nC, i, j);
            cout << "Paso 2: Regla A (empate demandas) -> O" << i + 1
                 << "-D" << j + 1 << " (c=" << c[i][j] << ")\n";
        } else if (nF > 1 && nC == 1) {
            // Regla B: empate en ofertas
            menorCosto(F, nF, C, nC, i, j);
            cout << "Paso 2: Regla B (empate ofertas) -> O" << i + 1
                 << "-D" << j + 1 << " (c=" << c[i][j] << ")\n";
        } else {
            // Empate cruzado: menor costo entre intersecciones
            menorCosto(F, nF, C, nC, i, j);
            cout << "Paso 2: Empate cruzado (menor costo) -> O" << i + 1
                 << "-D" << j + 1 << " (c=" << c[i][j] << ")\n";
        }

        // Paso 3
        double cant = of[i] < dem[j] ? of[i] : dem[j];
        cout << "Paso 3: asignar " << cant << "\n";

        // Paso 4
        x[i][j] += cant;
        of[i] -= cant;
        dem[j] -= cant;
        total += cant * c[i][j];

        cout << "Paso 4: of O" << i + 1 << "=" << of[i]
             << " | dem D" << j + 1 << "=" << dem[j] << "\n";

        bool ofCero = of[i] <= EPS;
        bool demCero = dem[j] <= EPS;

        if (ofCero) of[i] = 0;
        if (demCero) dem[j] = 0;

        // Caso degen.: se agotaron oferta y demanda a la vez
        if (ofCero && demCero) {
            int op;
            cout << "Tabla al elegir (of y dem en 0):\n";
            mostrarTabla();
            cout << "Oferta y demanda en cero. Eliminar:\n"
                 << "  1) Fila (O" << i + 1 << ")\n"
                 << "  2) Columna (D" << j + 1 << ")\n"
                 << "Opcion: ";
            cin >> op;
            if (op == 2) {
                colOK[j] = false;
                cout << "-> se elimina columna D" << j + 1 << "\n";
            } else {
                filaOK[i] = false;
                cout << "-> se elimina fila O" << i + 1 << "\n";
            }
        } else {
            if (ofCero) filaOK[i] = false;
            if (demCero) colOK[j] = false;
        }
    }

    cout << "\n--- Resultado ---\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (x[i][j] > EPS)
                cout << "O" << i + 1 << "->D" << j + 1
                     << " = " << x[i][j] << " (c=" << c[i][j]
                     << ", costo=" << x[i][j] * c[i][j] << ")\n";
        }
    }
    cout << "COSTO TOTAL = " << total << "\n";

    // Tabla final: cantidad (costo unitario)
    cout << "\n--- Tabla final (cant | c) ---\n";
    cout << "      ";
    for (int j = 0; j < n; j++)
        cout << "    D" << j + 1 << "   ";
    cout << "\n";
    for (int i = 0; i < m; i++) {
        cout << "O" << i + 1 << "   ";
        for (int j = 0; j < n; j++) {
            if (x[i][j] > EPS)
                cout << x[i][j] << "(" << c[i][j] << ")  ";
            else
                cout << "-(" << c[i][j] << ")  ";
        }
        cout << "\n";
    }
}

bool leerArchivo(const char* ruta) {
    ifstream in(ruta);
    if (!in) {
        cout << "No se pudo abrir " << ruta << "\n";
        return false;
    }
    in >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            in >> c[i][j];
    for (int i = 0; i < m; i++) in >> of[i];
    for (int j = 0; j < n; j++) in >> dem[j];
    return true;
}

bool leerTeclado() {
    cout << "m n: ";
    cin >> m >> n;
    cout << "Costos (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> c[i][j];
    cout << "Ofertas (" << m << "):\n";
    for (int i = 0; i < m; i++) cin >> of[i];
    cout << "Demandas (" << n << "):\n";
    for (int j = 0; j < n; j++) cin >> dem[j];
    return true;
}

int main() {
    cout << "Heuristica Mayor Oferta x Mayor Demanda\n";
    cout << "1) Teclado  2) Archivo\nOpcion: ";
    int op;
    cin >> op;

    bool ok = false;
    if (op == 1) {
        ok = leerTeclado();
    } else if (op == 2) {
        char ruta[200];
        cout << "Archivo: ";
        cin >> ruta;
        ok = leerArchivo(ruta);
    } else {
        return 0;
    }
    if (!ok) return 1;

    double sumO = 0, sumD = 0;
    for (int i = 0; i < m; i++) sumO += of[i];
    for (int j = 0; j < n; j++) sumD += dem[j];
    if (sumO < sumD - EPS || sumO > sumD + EPS) {
        cout << "No hay equilibrio: oferta=" << sumO
             << " demanda=" << sumD << "\n";
        return 1;
    }

    resolver();
    return 0;
}
