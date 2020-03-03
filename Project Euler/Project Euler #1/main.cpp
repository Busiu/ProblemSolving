#include <iostream>

using namespace std;

int main()
{
    unsigned long long int suma, n, a;
    cin >> n;
    for(int x=0; x<n; x++)
    {
        cin >> a;
        suma=0;

        suma+=(a-1)/3*3*((a-1)/3+1)/2;
        suma-=(a-1)/15*15*((a-1)/15+1)/2;
        suma+=(a-1)/5*5*((a-1)/5+1)/2;

        cout << suma << endl;

    }
    return 0;
}
