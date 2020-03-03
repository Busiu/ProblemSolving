#include <iostream>

using namespace std;

int main()
{
   long long int n, a, b, c, d, NWD;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b;

        c = a;
        d = b;

        while(a!=0 && b!=0)
        {
            if(a>b)
                a%=b;
            else
                b%=a;
        }

        if(a>0)
            NWD = a;
        else
            NWD = b;

        cout << NWD << " " << c/NWD*d << endl;
    }
    return 0;
}
