#include <iostream>
#include <vector>

using namespace std;

bool czy_pierwsza(long long int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


int main()
{
    long long int t, n;
    vector <long long int> suma;
    suma.push_back(0);
    suma.push_back(0);
    suma.push_back(2);
    for(int i=3; i<=1000000; i++)
    {
        if(czy_pierwsza(i))
        {
            suma.push_back(suma[suma.size()-1]+i);
        }
        else
        {
            suma.push_back(suma[suma.size()-1]);
        }
    }

    cin >> t;
    for(int x=0; x<t; x++)
    {
        cin >> n;
        cout << suma[n] << endl;

    }

    return 0;
}
