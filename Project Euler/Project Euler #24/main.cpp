#include <iostream>
#include <string>

using namespace std;

string sortuj(string a)
{
    int n = a.length();
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(int(a[j])>int(a[j+1]))
                swap(a[j],a[j+1]);
        }
    }

    return a;
}

void zeruj(int t[])
{
    for(int i=0; i<13; i++)
        t[i]=0;
}

int main()
{
    string wyraz="abcdefghijklm", pod_wyraz, wyraz_budowany;
    int t, zamiana;
    int ile[13];
    long long int n;
    long long int silnia[13];
    silnia[1]=1;
    for(int i=2; i<13; i++)
    {
        silnia[i]=silnia[i-1]*i;
    }

    cin >> t;
    for(int x=0; x<t; x++)
    {
        cin >> n;
        n--;
        zeruj(ile);

        for(int i=12; i>0; i--)
        {
            while(n>=silnia[i])
            {
                ile[i]++;
                n-=silnia[i];
            }
        }

        pod_wyraz=wyraz;
        wyraz_budowany="";

        for(int i=12; i>0; i--)
        {

            if(ile[i]!=0)
            {
                swap(pod_wyraz[0],pod_wyraz[ile[i]]),
                wyraz_budowany+=pod_wyraz[0];
                pod_wyraz=pod_wyraz.substr(1, pod_wyraz.size());
                pod_wyraz=sortuj(pod_wyraz);
            }
            else
            {
                wyraz_budowany+=pod_wyraz[0];
                pod_wyraz=pod_wyraz.substr(1, pod_wyraz.size());
            }
        }

        wyraz_budowany+=pod_wyraz;

        cout << wyraz_budowany << endl;

    }
    return 0;
}
