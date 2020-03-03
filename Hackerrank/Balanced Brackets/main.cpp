#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    string brackets;
    vector <char> klamry;
    bool porzadek;

    cin >> n;
    for(int x=0; x<n; x++)
    {
        porzadek=true;
        cin >> brackets;
        for(int i=0; i<brackets.length(); i++)
        {
            if(brackets[i]=='('||brackets[i]=='{'||brackets[i]=='[')
                klamry.push_back(brackets[i]);
            else if(!klamry.empty()&&(int(brackets[i])-int(klamry[klamry.size()-1]))<3)
                klamry.pop_back();
            else
            {
                porzadek=false;
                break;
            }
        }

        if(porzadek&&klamry.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        klamry.clear();
    }

    return 0;
}
