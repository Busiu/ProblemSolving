#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector <int> dane1;
    vector <int> dane2;
    int *s1, *s2;
    int suma1, suma2;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> suma1;
            if(i==j)
                dane1.push_back(suma1);
            if(n-j-1==i)
                dane2.push_back(suma1);
        }
    }

    s1=&dane1[0];
    s2=&dane2[0];
    suma1=0;
    suma2=0;

    for(int i=0; i<n; i++)
    {
        suma1+=*s1;
        suma2+=*s2;
        s1++;
        s2++;
    }

    if(suma1-suma2<0)
        cout << suma2-suma1;
    else
        cout << suma1-suma2;


    return 0;
}
