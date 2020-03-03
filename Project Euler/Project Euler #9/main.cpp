#include <iostream>
#include <cmath>

using namespace std;

int binar(int liczba, int n)
{
    int a=1;
    int b=liczba/2;
    int pom;

    while(a<b)
    {
        pom=(a+b)/2;
        if(2*pom*(liczba-pom) + 2*(n-liczba)*n < n*n)
            a=pom+1;
        else
            b=pom;
    }


    if(2*a*(liczba-a) + 2*(n-liczba)*n == n*n)
        return a;
    else
        return -1;
}

int main()
{
    int t, n, maks=0, pomn, c;
    cin >> t;
    for(int x=0; x<t; x++)
    {
        maks=0;
        cin >> n;
        if(n%2==0)
        {
            pomn=2*n;
            for(int i=7; 3*i<pomn; i++)
            {
                cout << "meme" << endl;
                if(binar(i,n)>0)
                {
                    c = binar(i,n);
                    if((n-i)*(i-c)*c>maks)
                    {
                        maks=(n-i)*(i-c)*c;
                    }
                }

            }

            if(maks!=0)
                cout << maks << endl;
            else
                cout << -1 << endl;
        }
        else
            cout << -1 << endl;

    }
    return 0;
}
