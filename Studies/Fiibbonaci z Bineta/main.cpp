#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i = 1;

    while((pow(((1 + sqrt(5))/2),i))/sqrt(5) < 1000000)
    {
        cout << round(pow(((1 + sqrt(5))/2),i)/sqrt(5)) << endl;
        i++;
    }

    return 0;
}
