#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct wierzcholek
{
    int indeks;
    int odl;
};

struct porownywacz
{
    bool operator ()( const wierzcholek & node1, const wierzcholek & node2 )
    {
        //kolejnoœæ - rosn¹co
        if( node1.odl > node2.odl ) return true;

        if( node1.odl < node2.odl ) return false;

        return false;
    }
};

int main()
{
    int a;
    wierzcholek b;
    //std::priority_queue < int, std::vector < int >, std::less < int > > k1;
    priority_queue <wierzcholek, vector <wierzcholek>, porownywacz> k1;
    b.indeks = 1;
    b.odl = 3;
    k1.push(b);
    b.odl = 5;
    k1.push(b);
    b.odl = 1;
    k1.push(b);
    while(!k1.empty()){
        b = k1.top();
        cout << b.odl << " ";
        k1.pop();
    }
    cin >> a;
    return 0;
}
