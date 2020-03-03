#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, element;
    vector <int> maks;
    vector <int> elementy;
    cin >> t;
    for(int x=0; x<t; x++)
    {
        cin >> n;
        cin >> element;
        maks.push_back(element);
        for(int i=2; i<=n; i++)
        {
            for(int j=0; j<i; j++)
            {
                cin >> element;
                elementy.push_back(element);
            }
            maks.push_back(maks[maks.size()-1]+elementy[i-1]);
            for(int j=i-2; j>0; j--)
            {
                maks[j]=max(maks[j],maks[j-1]);
                maks[j]+=elementy[j];
            }

            maks[0]+=elementy[0];

            elementy.clear();
        }

         int meme = 0;
        for(int i=0; i<n; i++)
        {
            if(maks[i]>meme)
                meme=maks[i];
        }

        cout << meme << endl;

        maks.clear();

    }
    return 0;
}
