#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    long long int T, a, kopia, licznik1, licznik2;
    cin >> T;
    for(int x = 0; x < T; x++)
    {
        cin >> a;
        kopia = a;
        licznik1 = 0;
        licznik2 = 0;

        while((a%2 != 1))
        {
            licznik1++;
            a = a >> 1;
        }

        while(kopia >= 1)
        {
            if(kopia%2 == 1)
                licznik2++;
            kopia = kopia >> 1;
        }
        licznik2--;

        licznik1 += licznik2;


        if(licznik1 % 2 == 0)
            cout << "Richard" << endl;
        else
            cout << "Louise" << endl;

    }



    return 0;
}
