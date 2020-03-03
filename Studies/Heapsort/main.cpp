#include <iostream>
#define maxsize 1000

struct heap{
    int t[maxsize];
    int rozmiar;
};

int parent(int i)
{
    return (i-1)/2;
}

int left(int i)
{
    return 2*i+1;
}

int right(int i)
{
    return 2*i+2;
}

void heapify(heap *h, int i)
{
    int m=i, l, r;
    l = left(i);
    r = right(i);
    if(h->rozmiar<l && h->t[l]>h->t[m])
        m=l;
    if(h->rozmiar<r && h->t[r]>h->t[m])
        m=r;

    int pom = h->t[i];
    h->t[i]=h->t[m];
    h->t[m]=pom;

    heapify(h,m);
}

void increasekey(heap *h, int i, int key)
{
    h->t[i]=key;

    while(i!=parent(i) && h->t[i]>h->t[parent(i)] )
    {
        int pom = h->t[parent(i)];
        h->t[parent(i)] = h->t[i];
        h->t[i] = pom;
        i = parent(i);
    }
}

int zdejmowanie(heap *h)
{
    if(rozmiar>1)
    {
        int pom = h->t[0];
        h->t[0] = h->t[h->rozmiar-1];
        h->rozmiar--;

        heapify(h,0);

    }

    else
    {
        int pom = h->t[0];
        h->rozmiar--;
    }

    return pom;
}

void insertheap(heap *h, int w)
{
    h->t[h->rozmiar]=w;
    rozmiar++;
    while(i!=parent(i) && h->t[i]>h->t[parent(i)])
    {
        int pom = h->t[parent(i)];
        h->t[parent(i)] = h->t[i];
        h->t[i] = pom;
        i = parent(i);
    }

}



using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
