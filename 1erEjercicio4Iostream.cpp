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
