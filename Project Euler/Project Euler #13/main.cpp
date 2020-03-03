#include <iostream>
#include <vector>
#include <sstream>

using namespace std;



long long int konwerter(string a)
{
    long long int pom=0;
    for(int i=0; i<15; i++)
    {
        pom+=int(a[i]-48);
        pom*=10;
    }
    pom/=10;
    return pom;
}



int main()
{
    int n;
    long long int suma=0;
    string XD;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> XD;
        suma+=konwerter(XD);
    }

    ostringstream ss;
    ss << suma;
    string str = ss.str();
    str = str.substr(0,10);
    cout << str;
    return 0;
}
