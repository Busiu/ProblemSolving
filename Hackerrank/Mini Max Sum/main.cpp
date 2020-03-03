#include <iostream>

using namespace std;

int main()
{
    long long int t[5];
    long long int suma = 0, minimum, maximum = 0;

    for(int i=0; i < 5; i++)
    {
        cin >> t[i];
        suma += t[i];
    }

    minimum = suma;

    for(int i=0; i < 5; i++)
    {
        if(suma - t[i] > maximum)
            maximum = suma - t[i];
        if(suma - t[i] < minimum)
            minimum = suma - t[i];
    }

    cout << minimum << " " << maximum;

    return 0;
}
