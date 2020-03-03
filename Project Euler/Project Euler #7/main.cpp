#include <iostream>
#include <vector>

using namespace std;

bool czy_pierwsza(int n)
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
    vector <int> pierwsze;
    int j=2;
    int t;
    int n;
    for(int i=0; i<10000; j++)
    {
        if(czy_pierwsza(j))
        {
            pierwsze.push_back(j);
            i++;
        }
    }

    cin >> t;
    for(int x=0; x<t; x++)
    {
        cin >> n;
        cout << pierwsze[n-1] << endl;
    }

    return 0;
}
