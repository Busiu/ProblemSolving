#include <iostream>
#include <queue>

using namespace std;

void BFS(bool E[1001][1001], int poczatek, int n, int odleglosc[1001])
{
    queue <int> kolejka;
    int obrabiany, ostatni, odl=0;
    bool V[n];
    for(int i = 1; i <= n; i++)
        V[i] = false;

    kolejka.push(poczatek);
    ostatni = poczatek;
    while(!kolejka.empty())
    {
        obrabiany = kolejka.front();
        kolejka.pop();

        V[obrabiany] = true;
        odleglosc[obrabiany] = odl;

        for(int i = 1; i <= n; i++)
        {
            if(E[i][obrabiany]==true && V[i]==false)
            {
                kolejka.push(i);
                V[i] = true;
            }
        }

        if(ostatni==obrabiany)
        {
            odl +=6;
            ostatni = kolejka.back();
        }

    }

}

int main()
{
    int q,n,m, node1, node2, poczatek;
    bool E[1001][1001];
    int odleglosc[1001];
    for(int i=1; i<=1000; i++)
    {
        odleglosc[i]=-1;
    }
    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            E[i][j]=false;
        }
    }
    cin >> q;

    for(int x=0; x<q; x++)
    {
        cin >> n >> m;
        for(int i=0; i<m; i++)
        {
            cin >> node1 >> node2;
            E[node1][node2] = true;
            E[node2][node1] = true;
        }
        cin >> poczatek;

        BFS(E,poczatek,n,odleglosc);

        for(int i=1; i<=n; i++)
        {
            if(odleglosc[i]!=0)
                cout << odleglosc[i] << " ";
        }
        cout << endl;
                                                    //Czyszczenie macierzy przejsc oraz tablicy odleglosci
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                E[i][j]=false;
            }
        }
        for(int i=1; i<=n; i++)
        {
            odleglosc[i]=-1;
        }


    }
    return 0;
}
