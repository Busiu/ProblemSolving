#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int Q, Nodes, Edges;
    cin >> Q;
    for(int q = 0; q < Q; q++){
        cin >> Nodes >> Edges;
        for(int i = Nodes - 1; i > 0; i--){
            if(Edges > (i - 1) * Nodes * Nodes / (2 * i)){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
