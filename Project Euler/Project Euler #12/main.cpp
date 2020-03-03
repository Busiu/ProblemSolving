#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int ile_dzielnikow(int n)
{
    int pom=0, pierwiastek;
    for(int i=1; i*i<n; i++)
    {
        if(n%i==0)
            pom+=2;
    }
    pierwiastek=sqrt(n);
    if(pierwiastek*pierwiastek==n)
        pom++;

    return pom;

}

int main()
{
    long long int t, n, trojkat=3, i=2, maks=1;
    vector <int> liczba_dzielnikow;
    liczba_dzielnikow.push_back(0);
    while(liczba_dzielnikow.size()<=1001)
    {
        i++;
        if(maks<ile_dzielnikow(trojkat))
        {
            for(int i=0; i<ile_dzielnikow(trojkat)-maks; i++)
                liczba_dzielnikow.push_back(trojkat);
            maks=ile_dzielnikow(trojkat);
        }

        trojkat+=i;
    }

    cin >> t;
    for(int x=0; x<t; x++)
    {
        cin >> n;
        cout << liczba_dzielnikow[n] << endl;
    }
    return 0;
}
