#include <iostream>

using namespace std;

int main()
{
    int maximum = 0, a, b, pom;
    cin >> a >> b;
    for(int i = a; i < b; i++)
    {
        for(int j = i + 1; j <= b; j++)
        {
            pom = i^j;
            if(pom > maximum)
                maximum = pom;
        }

    }

    cout << maximum;
    return 0;
}
