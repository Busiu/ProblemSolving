#include <iostream>

using namespace std;

int zlicz(int t[], int n)
{
    return t[n] + t[n+1] + t[n+2] + t[n+7] + t[n+12] + t[n+13] + t[n+14];
}

int main()
{
    int a[36];
    int suma=-100;
    for(int i=0; i<36; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(zlicz(a, 6*i+j)>suma)
                suma = zlicz(a, 6*i+j);
        }
    }

    cout << suma;
    return 0;
}
