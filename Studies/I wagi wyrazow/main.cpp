#include <iostream>
#include <string>

using namespace std;

bool czy_samogloska(char a)
{
    int b = int(a);
    if(b==97||b==101||b==105||b==111||b==117)
    return true;

    return false;

}

bool mozna(string wyraz, int dlugosc_wyrazu, int waga, int indeks, int samogloski_wymagane, int samogloski)
{
    if(waga==0&&samogloski==samogloski_wymagane) return true;
    if(indeks==dlugosc_wyrazu) return false;
    if(waga<0) return false;

    if(czy_samogloska(wyraz[indeks]))
    {
        if(mozna(wyraz, dlugosc_wyrazu, waga - int(wyraz[indeks]), indeks + 1, samogloski_wymagane, samogloski + 1)) return true;
        if(mozna(wyraz, dlugosc_wyrazu, waga, indeks + 1, samogloski_wymagane, samogloski)) return true;
    }
    else
    {
        if(mozna(wyraz, dlugosc_wyrazu, waga - int(wyraz[indeks]), indeks + 1, samogloski_wymagane, samogloski)) return true;
        if(mozna(wyraz, dlugosc_wyrazu, waga, indeks + 1, samogloski_wymagane, samogloski)) return true;
    }

    return false;
}

int main()
{
    string s1, s2;
    int dlugosc_s2, waga_s1=0, liczba_samoglosek_s1=0;
    cin >> s1 >> s2;
    for(int i=0; i<s1.size(); i++)
    {
        waga_s1+=int(s1[i]);
        if(czy_samogloska(s1[i]))
            liczba_samoglosek_s1++;
    }

    dlugosc_s2 = s2.size();

    if(mozna(s2, dlugosc_s2, waga_s1, 0, liczba_samoglosek_s1, 0))
        cout << "TAK";
    else
        cout << "NIE";

    return 0;
}
