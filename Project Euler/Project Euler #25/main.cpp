#include <iostream>

using namespace std;

bool roznica(long long int a, long long int b)
{
    int poma=0, pomb=0;
    while(a>0)
    {
        a/=10;
        poma++;
    }
    while(b>0)
    {
        b/=10;
        pomb++;
    }
    if(pomb-poma>0)
        return true;
    else
        return false;
}

int main()
{
    long long int a=1, b=1;
    int t[5000];
    int i=1, g;
    t[0]=1;
    for(int x=2; i<5000; x++)
    {
        if(roznica(a,b))
        {
            t[i]=x;
            i++;
        }

        b+=a;
        a=b-a;

        if(b>100000000000000000)
        {
            a/=10;
            b/=10;
        }
    }

    cin >> g;

    for(int x=0; x<g; x++)
    {
        cin >> i;
        cout << t[i-1] << endl;
    }
    return 0;
}
