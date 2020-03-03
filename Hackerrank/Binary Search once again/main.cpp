#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, a, b, pom;
    bool znaleziona;
    vector <int> tablica;
    cin >> n;
    cin >> k;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        tablica.push_back(a);
    }

    for(int i=0; i<k; i++)
    {
        cin >> n;

        znaleziona=false;
        a=0;
        b=tablica.size()-1;
        while(a<b)
        {
            pom=(a+b)/2;
            if(tablica[pom]<n)
                a=pom+1;
            else
                b=pom;
        }

        if(tablica[a]==n)
        {
            while(tablica[a]==n&&a>=0)
                a--;
            a++;

            cout << a+1 << " ";
            znaleziona=true;
        }

        if(!znaleziona)
            cout << -1 << " ";

    }
    return 0;
}
