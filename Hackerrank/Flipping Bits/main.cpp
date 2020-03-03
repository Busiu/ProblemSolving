#include <iostream>

using namespace std;

int main()
{
    unsigned int n, a;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        a = a ^ 4294967295;
        cout << a << endl;
    }
    return 0;
}
