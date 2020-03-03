#include <iostream>

using namespace std;

int main()
{
    int n, wybraniec, miejsce_wybranca;
    int t[1000];
    bool wsadzony=false;
    cin >> n;

    miejsce_wybranca = n-1;

    for(int i=0; i<n; i++)
        cin >> t[i];

    wybraniec = t[n-1];

    do
    {
       for(int i=0; i<n; i++)
       {
           if(i!=miejsce_wybranca)
            cout << t[i] << " ";

           else if(t[miejsce_wybranca-1]>wybraniec)
           {
               cout << t[i-1] << " ";
               swap(t[i],t[i-1]);
               miejsce_wybranca--;
           }

           else
           {
               cout << wybraniec << " ";
               wsadzony = true;
           }
       }

       cout << endl;
    }while(!wsadzony);


    return 0;
}

