#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[100000];
    int maks=0;
    int sum=0;

    cin >> n;

    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<n; i++)
    {
        if(maks<a[i])
            maks = a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]==maks)
            sum++;
    }

    cout << sum;

    return 0;
}
