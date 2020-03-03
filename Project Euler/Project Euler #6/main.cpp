#include <iostream>

using namespace std;

unsigned long long int suma_kwadratow(long long int n)
{
    return (2*n+1)*(n+1)*n/6;
}

unsigned long long int suma_szescianow(long long int n)
{
    return (n+1)*n*n*(n+1)/4;
}

int main()
{
    long long int t, n;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        cout << suma_szescianow(n) - suma_kwadratow(n) << endl;
    }
    return 0;
}
