#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a, koszt, kula=1;
    vector <int> dzieci;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        dzieci.push_back(a);
    }

    koszt = 1;

    for(int i=1; i<dzieci.size(); i++)
    {
        if(dzieci[i-1]<dzieci[i])
        {
            kula++;
            koszt+=kula;
        }
        else
        {
            kula=1;
            koszt+=kula;
        }

    }

    cout << koszt;

    return 0;
}
