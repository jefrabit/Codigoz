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
