#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int testy, n, str;
    long long int exp, hp;
    int t[100000];

    cin >> testy;

    for(int x=0; x<testy; x++)
    {
        cin >> n;
        exp=0;
        hp=0;
        for(int i=0; i<n; i++)
        {
            cin >> t[i];
            hp+=t[i];
        }

        sort(t, t+n);

        for(int i=1; i<=n; i++)
        {
            if(i*hp>exp)
                exp = i*hp;
            hp-=t[i-1];
        }

        cout << exp << endl;

    }

    return 0;
}
