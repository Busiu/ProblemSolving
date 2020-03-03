#include <iostream>
#include <vector>

using namespace std;

int maks(vector <int> t)
{
    int naj = t[0];
    for(int i=1; i<t.size(); i++)
    {
        if(t[i]>naj)
            naj=t[i];
    }
    return naj;
}

int main()
{
    int typ, n, naj=0;
    vector <int> stos;
    vector <int> stos_maksymalnych;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> typ;

        if(typ==1)
        {
            cin >> typ;
            stos.push_back(typ);
            if(typ>=naj)
            {
                stos_maksymalnych.push_back(typ);
                naj=typ;
            }
        }
        else if(typ==2)
        {
            if(stos[stos.size()-1]==stos_maksymalnych[stos_maksymalnych.size()-1])
            {
                stos_maksymalnych.pop_back();
                if(!stos_maksymalnych.empty())
                    naj=stos_maksymalnych[stos_maksymalnych.size()-1];
                else
                    naj=0;
            }
            stos.pop_back();
        }
        else if(typ==3)
            cout << stos_maksymalnych[stos_maksymalnych.size()-1] << endl;


    }

    return 0;
}
