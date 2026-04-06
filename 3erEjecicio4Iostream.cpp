#include <iostream>
using namespace std;

int main()
{
    int n, i, suma = 0;

    cin >> n;

    cout << "N= " << n << endl;

    for(i=1;i<=n;i++)
    {
        cout << i;
        suma = suma + i;

        if(i<n)
            cout << "+";
    }

    cout << "=" << suma;

    return 0;
}