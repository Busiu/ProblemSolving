#include <iostream>
#include <vector>

using namespace std;

bool czy_pierwsza(long long int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

long long int potega(long long int n, long long int wykladnik)
{
    long long int pom=1;
    for(int i=0; i<wykladnik; i++)
    {
        pom*=n;
    }
    return pom;
}

int main()
{
    long long int t, n, *w, pom1, pom2, iloczyn;
    vector <long long int> pierwsze;
    vector <long long int> dzielniki;
    for(int i=2; i<=40; i++)
    {
        if(czy_pierwsza(i))
        {
            pierwsze.push_back(i);
        }
    }

    cin >> t;
    for(int x=0; x<t; x++)
    {
        dzielniki.clear();
        w=&pierwsze[0];
        iloczyn=1;
        cin >> n;
        for(int i=*w; i<=n; i=*w)
        {
            pom1=0;
            pom2=i;
            while(n/pom2!=0)
            {
                pom1++;
                pom2*=i;
            }
            dzielniki.push_back(pom1);
            w++;
        }

        for(int i=0; i<dzielniki.size(); i++)
        {
            iloczyn*=potega(pierwsze[i],dzielniki[i]);
        }
        cout << iloczyn << endl;
    }


    return 0;
}
