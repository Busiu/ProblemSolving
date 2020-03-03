#include <iostream>
#include <vector>

using namespace std;

string mnozenie(string a)
{
    string pom ="";
    int x=0;
    for(int i=a.length()-1; 0<=i; i--)
    {
        pom+=char((2*(int(a[i])-48)+x)%10+48);
        if(2*(int(a[i])-48)+x>9)
        {
            x=1;
        }
        else
            x=0;
    }
    if(x==1)
        pom+='1';

    for(int i=0; i<pom.length()/2; i++)
    {
        swap(pom[i],pom[pom.length()-1-i]);
    }

    return pom;
}

int suma(string a)
{
    int suma=0;
    for(int i=0; i<a.length(); i++)
    {
        suma+=(int(a[i])-48);
    }

    return suma;
}

int main()
{
    int t, n;
    vector <int> suma_cyfr;
    string a="1";

    for(int i=1; i<=10000; i++)
    {
        suma_cyfr.push_back(suma(a));
        a=mnozenie(a);
    }

    cin >> t;
    for(int x=0; x<t; x++)
    {
        cin >> n;
        cout << suma_cyfr[n] << endl;
    }

    return 0;
}
