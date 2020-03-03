#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int pom1, pom2, t, n;
    vector <int> tab;
    bool bul[1000001];
    for(int i=1; i<=100000; i++)
        bul[i]=false;

    tab[1]=1;

    for(int i=1; i<=100000; i++)
    {
        if(!bul[i])
        {
            int * tablica = new int [1000];
            pom1=i;
            pom2=0;
            while(pom1!=1)
            {
                tablica[pom2]=pom1;
                pom2++;
                if(pom1%2==0)
                    pom1/=2;
                else
                    pom1=3*pom1+1;
            }

            for(int i=0; i<pom2; i++)
            {
                if(tablica[i]<=100000)
                {
                    tab[tablica[i]]=pom2+1-i;
                    bul[tablica[i]]=true;
                }

            }

            delete [] tablica;

        }
    }
    pom1=1;
    pom2=1;
    for(int i=1; i<=100; i++)
    {
        if(pom2<=tab[i])
        {
            pom2=tab[i];
            pom1=i;
        }
        tab[i]=pom1;
        cout << tab[i] << endl;
    }






    cin >> t;
    for(int x=0; x<t; x++)
    {
        cin >> n;
        cout << tab[n] << endl;
    }



    return 0;
}
