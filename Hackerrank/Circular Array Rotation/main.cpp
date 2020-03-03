#include <iostream>

using namespace std;



int main()
{
    int n, k, q, pom1, pom2;
    int t[100000];

    cin >> n >> k >> q;
    for(int i=0; i<n; i++)
        cin >> t[i];

    for(int i=0; i<k%n; i++)
    {
        pom1 = t[0];
        pom2 = t[1];

        for(int j=1; j<=n; j++)
        {
            t[(j)%n] = pom1;
            pom1 = pom2;
            pom2 = t[(j+1)%n];
        }
    }

    for(int i=0; i<q; i++)
    {
        cin >> pom1;
        cout << t[pom1] << endl;
    }

    return 0;
}
