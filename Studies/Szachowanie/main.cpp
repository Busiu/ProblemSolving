#include <iostream>

using namespace std;

int maksymalne(int t[11][11], int n)
{
    int maks=-3000;
    int suma1=0;
    int suma2=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)     //bierzemy poszczegolne elementy tablicy
        {
            for(int k=0; k<n; k++)
            {
                suma1+=t[i][k];
                suma1+=t[k][j];
            }
            suma1-=2*t[i][j];

            for(int k=j+1; k<n; k++)    // wsadzanie kolejnej wiezy z i-tego wiersza
            {
                for(int l=0; l<n; l++)
                {
                    suma2+=t[l][k];
                }
                suma2-=2*t[i][k];

                if(suma1+suma2 > maks)
                {
                    maks = suma1+suma2;
                //    cout << suma1 << " " << suma2 << " ";
                }
                suma2=0;
            }

            for(int k=i+1; k<n; k++)  // wsadzanie drugiej wiezy do nizszych wierszy
            {
                for(int l=0; l<n; l++)
                {
                    for(int m=0; m<n; m++)
                    {

                        suma2+=t[k][m];
                        if(l!=j)
                        suma2+=t[m][l];
                    }

                    if(l!=j)
                    {
                        suma2-=2*t[k][l];
                        suma2-=t[i][l];
                        suma2-=t[k][j];
                    }

                    else
                    {
                        suma2-=2*t[k][l];
                    }

                    if(suma1+suma2 > maks)
                    {
                        maks = suma1+suma2;
                   //     cout << suma1 << " " << suma2 << " ";
                    }

                    suma2=0;
                }
            }
            suma1=0;
        }
    }

    return maks;
}

int main()
{
    int t[11][11];
    int n;
    int kordy;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> t[i][j];
        }
    }

    kordy = maksymalne(t, n);

    cout << kordy;
    return 0;
}
