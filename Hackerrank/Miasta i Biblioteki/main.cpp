#include <bits/stdc++.h>

using namespace std;

struct edge{
    int v;
    edge* next;
};

struct node{
    edge* guardian;
};

int liczba_skladowych_BFS(node t[], int size){
    int liczba_skladowych = 0, wierzcholek;
    bool* visited = new bool[size+1];
    queue <int> kolejka;

    for(int i = 1; i <= size; i++){
        visited[i] = false;
    }

    for(int i = 1; i <= size; i++){
        if(!visited[i]){
            kolejka.push(i);
            liczba_skladowych++;
        }
        while(!kolejka.empty()){
            wierzcholek = kolejka.front();
            kolejka.pop();
            visited[wierzcholek] = true;
            edge* pom = t[wierzcholek].guardian;
            while(pom->next != NULL){
                if(!visited[pom->next->v]){
                    kolejka.push(pom->next->v);
                }

                pom = pom->next;

            }
        }
    }

    delete[] visited;
    return liczba_skladowych;
}

int main() {
    int Q, Nodes, Edges, Lib, Road, x, y, liczba_skladowych;
    long long int wynik;
    cin >> Q;
    for(int p = 0; p < Q; p++){
        cin >> Nodes >> Edges >> Lib >> Road;
        if(Lib <= Road){
            for(int i = 0; i < Edges; i++){
                cin >> x >> y;
            }

            wynik = Lib * Nodes;
            cout << wynik << endl;
        }
        else{
            node* t = new node[Nodes+1];
            for(int i = 1; i < Nodes + 1; i++){
                edge* e = new edge;
                e->next = NULL;
                t[i].guardian = e;
            }

            for(int i = 0; i < Edges; i++){
                cin >> x >> y;
                edge* e = new edge;
                edge* f = new edge;
                e->v = y;
                f->v = x;

                e->next = t[x].guardian->next;
                t[x].guardian->next = e;
                f->next = t[y].guardian->next;
                t[y].guardian->next = f;
            }

            liczba_skladowych = liczba_skladowych_BFS(t, Nodes);
            wynik = liczba_skladowych*Lib + (Nodes - liczba_skladowych)*Road;
            cout << wynik << endl;

            for(int i = 1; i <= Nodes; i++){
                edge* pom = t[i].guardian;
                while(pom->next != NULL){
                    edge* zabic = pom;
                    pom = pom->next;
                    delete zabic;
                }

                delete t[i].guardian;
            }

            delete[] t;

        }
    }

    cin >> x;
    return 0;
}
