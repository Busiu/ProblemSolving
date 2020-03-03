#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T, N;
    vector <int> dane;
    int logar, pom, suma1, suma2;
    bool prawda, jedynka;

    cin >> T;
    for(int x=0; x<T; x++)
    {
        prawda = true;
        jedynka = true;
        cin >> N;
        for(int i=0; i<N; i++)
        {
            cin >> pom;
            dane.push_back(pom);
        }

        logar = dane.size()/2;
        pom = logar;
        while(jedynka)
        {
            suma1=0;
            suma2=0;
            for(int i=0; i<logar; i++)
                suma1+=dane[i];
            for(int i=logar+1; i<N; i++)
                suma2+=dane[i];

            if(pom==1)
                jedynka=false;

            if(suma1==suma2)
            {
                cout << "YES" << endl;
                dane.clear();
                prawda = false;
                break;
            }
            else if(suma1>suma2)
            {
                pom=(pom+1)/2;
                logar-=pom;
            }
            else
            {
                pom=(pom+1)/2;
                logar+=pom;
            }


        }
        if(prawda)
        cout << "NO" << endl;
        dane.clear();
    }

    return 0;
}
