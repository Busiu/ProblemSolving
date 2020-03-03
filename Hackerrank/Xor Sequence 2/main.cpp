#include <iostream>

using namespace std;

long long int xor_rekurencyjny(long long int a)
{
    long long int apom = a/4*4;
    long long int suma = 0;
    for(int i = apom; i <= a; i++)
    {
        suma = suma ^ i;
    }
    suma *= 2;

    return suma;
}

int main()
{
    unsigned long long int Q, L, R, pom, suma;
    cin >> Q;
    for(int i = 0; i < Q; i++)
    {
        cin >> L >> R;
        pom = R - L + 1;
        suma = 0;

        if(pom % 2 == 0)
        {
            if(L % 2 == 0)
            {
                suma = xor_rekurencyjny(R/2) ^ xor_rekurencyjny(L/2-1);
                if((pom/2) % 2 == 1)
                    suma = suma ^ 1;
            }

            else
            {
                suma = xor_rekurencyjny(R/2) ^ xor_rekurencyjny(L/2);
            }
        }

        else
        {
            if(L % 2 == 0)
            {
                suma = xor_rekurencyjny(L)/2;
                suma = suma ^ xor_rekurencyjny(R/2);
                suma = suma ^ xor_rekurencyjny(L/2);
            }

            else
            {
                suma = xor_rekurencyjny(L)/2;
                cout << suma << " ";
                suma = suma ^ xor_rekurencyjny(R/2);
                cout << suma << " ";
                suma = suma ^ xor_rekurencyjny(L/2);
                cout << suma << " ";
                if((pom/2) % 2 == 1)
                    suma = suma ^ 1;
            }
        }

        cout << suma << endl;

    }

    return 0;
}
