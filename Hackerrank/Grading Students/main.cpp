#include <iostream>

using namespace std;

int main()
{
    int n, ocena, modulo;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ocena;
        modulo = ocena%5;
        if(modulo>2&&ocena>37)
            ocena += 5 - modulo;
        cout << ocena << endl;

    }
    return 0;
}
