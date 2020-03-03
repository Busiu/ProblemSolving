#include <iostream>

using namespace std;
int a;

int main()
{
    long long int Q, L, R, Lpom, suma, wyraz;
    cin >> Q;
    for(int i = 0; i < Q; i++)
    {
        cin >> L >> R;
        Lpom = L/4*4;
        suma = 0;
        wyraz = 0;
        for(int j = Lpom; j <= R; j++)
        {
            wyraz = wyraz ^ j;
            suma = suma ^ wyraz;
        }

        wyraz = 0;
        for(int j = Lpom; j < L; j++)
        {
            wyraz = wyraz ^ j;
            suma = suma ^ wyraz;
        }

        cout << suma << endl;

    }
    return 0;
}
