#include <iostream>

using namespace std;

int Fib(int a)
{
    if(a>2)
    return Fib(a-1) + Fib(a-2);

    else
    return 1;

}

int main()
{
    /*
    for(int i=1; i<=30; i++)
    {
        cout << Fib(i) << " ";
    }
    */

    int i = 1;

    while(Fib(i)<=1000000)
    {
        cout << Fib(i) << endl;
        i++;
    }

    return 0;
}
