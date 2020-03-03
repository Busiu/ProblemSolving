#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int m, n, suma;
    long long int c[50];
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> c[i];
    }

    sort(c, c+m);

    long long int f[251][51];
    for(int i = 0; i < 251; i++){
        for(int j = 0; j < 51; j++){
            f[i][j] = 0;
        }
    }

    for(int i = 0; i < m; i++){
        f[c[i]][c[i]] = 1;
    }

 /*   for(int i = 1; i <= n; i++){
        for(int j = 1; j <= c[m-1]; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
*/
    for(int i = c[0]; i <= n; i++){
        for(int j = 0; c[j] < i && j < m; j++){
            suma = 0;

          //  cout << i << " " << c[j] << "   :";

            for(int k = 0; c[k] <= c[j] && k < m; k++){
                suma += f[i - c[j]][c[k]];
               // cout << i - c[j] << " " << c[k] << " , ";
            }


           // cout << endl;
            f[i][c[j]] = suma;
        }
    }

    suma = 0;

    for(int i = 0; i < m; i++){
        cout << f[n][c[i]] << " ";
        suma += f[n][c[i]];
    }

    cout << suma << endl;

  /*  for(int i = 1; i <= n; i++){
        for(int j = 1; j <= c[m-1]; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }

*/
    cin >> suma;
    return 0;
}
