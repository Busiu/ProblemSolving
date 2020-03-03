#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, dlugosc, ciag, iloczyn, maks;
    string liczba;
    vector <int> cyferki;

    cin >> t;
    for(int x=0; x<t; x++)
    {
        cyferki.clear();
        iloczyn=1;

        cin >> dlugosc >> ciag >> liczba;
        for(int i=0; i<dlugosc; i++)
        {
            cyferki.push_back(int(liczba[i])-48);
        }

        for(int i=0; i<ciag; i++)
        {
            iloczyn*=cyferki[i];
        }

        maks=iloczyn;

        for(int i=ciag; i<dlugosc; i++)
        {
            if(cyferki[i-ciag]!=0)
            iloczyn=iloczyn/cyferki[i-ciag]*cyferki[i];
            else
            {
                iloczyn=1;
                for(int j=i-ciag+1; j<i+1; j++)
                {
                    iloczyn*=cyferki[j];
                }
            }

            if(maks<iloczyn)
                  maks=iloczyn;

        }

        cout << maks << endl;
    }

    return 0;
}
