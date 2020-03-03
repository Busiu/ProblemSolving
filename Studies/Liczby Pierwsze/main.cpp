#include <iostream>

using namespace std;

int main()
{
    int n, a;

    bool czy_pierwsze;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a;

        czy_pierwsze = true;

        if(a>1)
        {
            for(int j=2; j*j<=a; j++)
            {
                if(a%j==0)
                {
                    czy_pierwsze = false;
                    break;
                }

            }

            if(czy_pierwsze==true)
                    cout << "TAK" << endl;
            else
                    cout << "NIE" << endl;
        }

        else
            cout << "NIE" << endl;
    }
    return 0;
}
