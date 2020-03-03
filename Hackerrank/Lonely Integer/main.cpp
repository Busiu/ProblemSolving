#include <iostream>

using namespace std;

int main()
{
    int n, pom, meme;
    int t[100];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(t[i] != -1)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(t[j] != -1)
                {
                    meme = t[i]^t[j];
                    if(meme == 0)
                    {
                        t[j] = -1;
                        t[i] = -1;
                    }
                }

            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(t[i] != -1)
            cout << t[i];
    }

    return 0;
}
