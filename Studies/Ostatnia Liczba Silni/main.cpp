#include <iostream>

using namespace std;

int n;
int znaczaca = 2;
int iloczyn = 1;

int ile_piatek(int a)
{
    int liczba_piatek = 0;
    while(a%5==0)
    {
        a=a/5;
        liczba_piatek++;
    }

    return liczba_piatek;

}

int potega_10(int a)
{
    int potega = 1;
    for(int i=0; i<a; i++)
    {
        potega = potega * 10;
    }

    return potega;
}











int main()
{
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        iloczyn = iloczyn * i;

        for(int j=0; j<ile_piatek(i); j++)
        {
            iloczyn = iloczyn / 10;
        }

        if(znaczaca<=ile_piatek(i)+1)
            znaczaca++;

        iloczyn = iloczyn % potega_10(znaczaca);
    }

    cout << iloczyn % 10;

    return 0;
}
