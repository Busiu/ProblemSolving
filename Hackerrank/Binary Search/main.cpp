#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, a, pom1, pom2, pom3;
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
        pom1=tablica.size()/2;
        pom2=pom1+1;
        pom3=-8;
        znaleziona=false;

        while(pom2!=pom3)
        {
            pom3=pom2;
            pom2=(pom2+1)/2;
            if(tablica[pom1]==n)
            {
                while(tablica[pom1]==n)
                    pom1--;
                pom1++;
                cout << pom1 + 1 << " ";
                znaleziona=true;
                break;
            }
            if(tablica[pom1]>n)
                pom1-=pom2;
            if(tablica[pom1]<n)
                pom1+=pom2;
            if(pom1<0)
                pom1=0;

        }
        if(!znaleziona)
            cout << -1 << " ";
    }

    return 0;
}
