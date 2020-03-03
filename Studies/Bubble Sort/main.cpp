#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int t[1000];

    for(int i=0; i<n; i++)
        cin >> t[i];

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(t[j] > t[j+1])
                swap(t[j],t[j+1]);
        }

    }

    for(int i=0; i<n; i++)
        cout << t[i] << " ";
    return 0;
}
