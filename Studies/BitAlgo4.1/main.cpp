#include <iostream>

using namespace std;

void hanoi(int n, int source, int target, int tmp)
{
    if(n==1)
    {
        cout << source << " " << target;
        cout << endl;

        return;
    }

        hanoi(n-1, source, tmp, target);
            cout << source << " " << target;
            cout << endl;
        hanoi(n-1, tmp, target, source);

}

int main()
{
    hanoi(5, 1, 3 ,2);

    return 0;
}
