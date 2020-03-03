#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct edge{
    int waga;
    int x;
    int y;
};

int partition(edge t[], int pocz, int kon){
    int j = pocz;
    for(int i = pocz; i <= kon; i++){
        if(t[i].waga < t[kon].waga){
            swap(t[i], t[j]);
            j++;
        }
        else if(t[i].waga == t[kon].waga){
            if(t[i].waga + t[i].x + t[i].y < t[kon].waga + t[kon].x + t[kon].y){
                swap(t[i], t[j]);
                j++;
            }
        }
    }

    swap(t[kon], t[j]);
    return j;
}

void quicksort(edge t[], int pocz, int kon){

    int pivot = partition(t, pocz, kon);
    if(pivot > pocz + 1){
        quicksort(t, pocz, pivot - 1);
    }
    if(pivot + 1 < kon){
        quicksort(t, pivot + 1, kon);
    }

}

void makeSet(int tab[], int i) {
	tab[i] = i;
}

int findSet(int tab[], int i) {
	return tab[i];
}

void unionSets(int tab[], int x, int y, int liczba_wierzcholkow) {
	int rx = findSet(tab, x);
	int ry = findSet(tab, y);
	if (rx != ry) {
		for (int i = 1; i <= liczba_wierzcholkow; i++) {
			if (tab[i] == ry)
				tab[i] = rx;
		}
	}
}









int main() {
    int Nodes, Edges;
    long long int suma = 0;
    cin >> Nodes >> Edges;
    edge * t = new edge[Edges + 1];
    int * set = new int[Nodes + 1];

    for(int i = 1; i <= Edges; i++){
        cin >> t[i].x >> t[i].y >> t[i].waga;
    }
    for(int i = 1; i <= Nodes; i++){
        makeSet(set, i);
    }

    quicksort(t, 1, Edges);

    int j = 1;
    for(int i = 1; j < Nodes; i++){
        if(findSet(set, t[i].x) != findSet(set, t[i].y)){
            suma += t[i].waga;
            j++;
            unionSets(set, t[i].x, t[i].y, Nodes);

        }
    }

    cout << suma;

    delete [] t;
    delete [] set;

    cin >> Nodes;


    return 0;
}
