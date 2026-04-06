#include <iostream>
using namespace std;

int main()
{
    int opcion;

    cout << "=== MENU ===" << endl;
    cout << "1. Ejercicio 1: Suma de productos a*x" << endl;
    cout << "2. Ejercicio 2: Serie de 1's" << endl;
    cout << "3. Ejercicio 3: Suma de 1 a n" << endl;
    cout << "4. Ejercicio 4: Suma de cuadrados" << endl;
    cout << "5. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1)
    {
        int n, i, j;
        double a, x, s = 0, producto;

        cout << "=== EJERCICIO 1: Suma de productos a*x ===" << endl;
        cout << "n: ";
        cin >> n;

        for (i = 1; i <= n; i++)
        {
            cout << "a" << i << ": ";
            cin >> a;
            cout << "x" << i << ": ";
            cin >> x;

            producto = 0;
            for (j = 1; j <= a; j++)
                producto = producto + x;

            s = s + producto;
        }

        cout << "resultado: " << s << endl;
    }
    else if (opcion == 2)
    {
        int n, i;

        cout << "=== EJERCICIO 2: Serie de 1's ===" << endl;
        cin >> n;

        for (i = 1; i <= n; i++)
            cout << "1+";

        cout << "=" << n << endl;
    }
    else if (opcion == 3)
    {
        int n, i, suma = 0;

        cout << "=== EJERCICIO 3: Suma de 1 a n ===" << endl;
        cin >> n;

        cout << "N= " << n << endl;

        for (i = 1; i <= n; i++)
        {
            cout << i;
            suma = suma + i;

            if (i < n)
                cout << "+";
        }

        cout << "=" << suma << endl;
    }
    else if (opcion == 4)
    {
        int n, i, j, suma = 0, cuadrado;

        cout << "=== EJERCICIO 4: Suma de cuadrados ===" << endl;
        cin >> n;

        cout << "N= " << n << endl;

        for (i = 1; i <= n; i++)
        {
            cout << i << "^2";

            cuadrado = 0;
            for (j = 1; j <= i; j++)
                cuadrado = cuadrado + i;

            suma = suma + cuadrado;

            if (i < n)
                cout << "+";
        }

        cout << "=" << suma << endl;
    }
    else if (opcion == 5)
    {
        cout << "Adios!" << endl;
    }
    else
    {
        cout << "Opcion no valida" << endl;
    }

    return 0;
}
