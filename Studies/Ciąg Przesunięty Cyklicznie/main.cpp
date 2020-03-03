#include <iostream>
#include <vector>

using namespace std;

int binary(int ciag[], int n, int granica, int dlugosc)
{
    int a=granica;
    int b=granica+dlugosc-1;
    int c=dlugosc;
    int pom;
    while(a<b)
        {
            pom=(a+b)/2;
            if(ciag[pom%c]<n)
                a=pom+1;
            else
                b=pom;
        }

        if(ciag[a%c]==n)
        {
            return a+1;
        }

    return -1;
}

int main()
{
    int n, k, a, b, granica=0;
    bool Pawul = true;
    //vector <long long int> ciag;
    int t[1000000];

    cin >> n;
    cin >> k;
    cin >> a;
    t[0]=a;
    for(int i=1; i<n; i++)
    {
        cin >> t[i];
       // ciag.push_back(b);
        if(a>t[i]&&Pawul)
        {
            granica=i;
            Pawul=false;
        }

        else if(Pawul)
            a=t[i];

    }

    for(int i=0; i<k; i++)
    {
        cin >> a;

        long long int w = (binary(t, a, granica,n))%n;
        long long int x = binary(t, a, granica,n);
        if(x!=-1&&w!=0)
            cout << w << " ";
        else if(x!=-1)
            cout << n << " ";
        else
            cout << -1 << " ";
    }

    return 0;
}
