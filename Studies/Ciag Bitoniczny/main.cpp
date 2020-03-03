#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    bool Pawul=true;
    cin >> n;
    cin >> a;
    for(int i=1; i<n; i++)
    {
        cin >> b;
        if(a>b)
            {
                cout << a;
                Pawul=false;
                break;
            }
        else
            a=b;
    }

    if(Pawul)
        cout << a;

    return 0;
}
