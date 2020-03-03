#include <iostream>

using namespace std;

int main()
{
    int n;
    unsigned long long int liczba, a, b, suma;
    cin >> n;
    for(int x=0; x<n; x++)
    {
        cin >> liczba;
        a=1;
        b=2;
        suma=0;

        while(b<liczba)
        {
            if(b%2==0)
                suma+=b;
            b+=a;
            a=b-a;
        }

        cout << suma << endl;
    }
    return 0;
}
