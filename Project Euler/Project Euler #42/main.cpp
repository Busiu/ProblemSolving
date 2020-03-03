#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int t, n, pom;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        n*=8;
        n++;
        pom = sqrt(n);
        if(n==pom*pom)
            cout << pom/2 << endl;
        else
            cout << -1 << endl;

    }
    return 0;
}
