#include <iostream>
#include <vector>

using namespace std;

bool czy_pierwsza(long long int a)
{
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    long long int liczba;
    vector <long long int> naj;
    cin >> n;
    bool znaleziona;
    bool pierwsza;

    for(int x=0; x<n; x++)
    {
        cin >> liczba;
        naj.clear();
        znaleziona = false;
        pierwsza = true;

        for(long long int i=2; i*i<=liczba; i++)
        {
            if(liczba%i==0)
            {
                pierwsza = false;
                if(czy_pierwsza(liczba/i))
                {
                    cout << liczba/i << endl;
                    znaleziona = true;
                    break;
                }
                if(czy_pierwsza(i))
                    naj.push_back(i);
            }

        }

        if(pierwsza)
            cout << liczba << endl;

        else if(!znaleziona)
            cout << naj[naj.size()-1] << endl;

    }
    return 0;
}
