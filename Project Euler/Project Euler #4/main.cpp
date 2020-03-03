#include <iostream>
#include <vector>

using namespace std;

bool czy_palindrom(int a)
{
    if(a%10==a/100000&&a%100/10==a/10000%10&&a%1000/100==a/1000%10)
        return true;
    else
        return false;
}

int main()
{
    int t;
    int liczba;
    vector <int> palindromy;
    int *w;

    for(int i=101101; i<1000000; i++)
    {
        if(czy_palindrom(i))
        {
            for(int j=i/1000+1; j*j<=i; j++)
            {
                if(i/j*j==i)
                {
                    palindromy.push_back(i);
                    break;
                }
            }
        }
    }


    cin >> t;
    for(int x=0; x<t; x++)
    {
        cin >> liczba;
        w=&palindromy[0];
        while(*w<liczba)
            w++;

        w--;

        cout << *w << endl;

    }
    return 0;
}
