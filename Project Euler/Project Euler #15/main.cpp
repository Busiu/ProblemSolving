#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool czy_pierwsza;
    long long int t, m, n, pom1, pom2, suma;
    vector <long long int> rozklad_licznika;
    vector <long long int> rozklad_mianownika;
    vector <long long int> pierwsze;

    for(int i=2; i<1000; i++)
    {
        czy_pierwsza=true;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
                czy_pierwsza=false;
        }
        if(czy_pierwsza==true)
            pierwsze.push_back(i);
    }
    cin >> t;
    for(int x=0; x<t; x++)
    {
        rozklad_licznika.clear();
        rozklad_mianownika.clear();
        cin >> m >> n;

        for(int i=0; i<pierwsze.size(); i++)
        {
            pom1=0;
            pom2=m+n;
            while(pom2>1)
            {
                pom2/=pierwsze[i];
                pom1+=pom2;
            }
            rozklad_licznika.push_back(pom1);

        }

        for(int i=0; i<pierwsze.size(); i++)
        {
            pom1=0;
            pom2=m;
            while(pom2>1)
            {
                pom2/=pierwsze[i];
                pom1+=pom2;
            }
            rozklad_mianownika.push_back(pom1);
        }

        for(int i=0; i<pierwsze.size(); i++)
        {
            pom1=0;
            pom2=n;
            while(pom2>1)
            {
                pom2/=pierwsze[i];
                pom1+=pom2;
            }
            rozklad_mianownika[i]+=pom1;
        }

        suma=1;

        for(int i=0; i<pierwsze.size(); i++)
        {
            for(int j=0; j<rozklad_licznika[i]-rozklad_mianownika[i]; j++)
            {
                suma=(suma*pierwsze[i])%1000000007;
            }
        }

        cout << suma << endl;

    }
    return 0;
}
