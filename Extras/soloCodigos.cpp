// ==================== EJERCICIO 1 ====================
#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    double a, x, s = 0, producto;

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

    cout << "resultado: " << s;

    return 0;
}


// ==================== EJERCICIO 2 ====================
#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cin >> n;

    for (i = 1; i <= n; i++)
        cout << "1+";

    cout << "=" << n;

    return 0;
}


// ==================== EJERCICIO 3 ====================
#include <iostream>
using namespace std;

int main()
{
    int n, i, suma = 0;

    cin >> n;

    cout << "N= " << n << endl;

    for (i = 1; i <= n; i++)
    {
        cout << i;
        suma = suma + i;

        if (i < n)
            cout << "+";
    }

    cout << "=" << suma;

    return 0;
}


// ==================== EJERCICIO 4 ====================
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, suma = 0, cuadrado;

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

    cout << "=" << suma;

    return 0;
}
