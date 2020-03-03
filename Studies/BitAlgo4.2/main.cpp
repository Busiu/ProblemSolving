#include <iostream>

using namespace std;

void scal(int *t, int b1, int e1, int e2)
{
    int tmp[e2-b1];
    for(int i=0; i<e2-b1; i++)
    {
        tmp[i]=t[i+b1];
    }

    int p=e1-b1;
    int j=0;
    int i=0;

    while(i<e1-b1&&j<e2-e1)
    {
        if(tmp[i]<tmp[j+p])
        {
            t[b1+i+j]=tmp[i];
            i++;
        }
        else
        {
            t[b1+i+j]=tmp[j+p];
            j++;
        }
    }
    if(i==e1-b1)
    {
        for(int k=i+j; k<e2-b1; k++)
            t[b1+k]=tmp[k];
    }
    else
        for(int k=0; k<e1-b1-i; k++)
        {
            t[b1+i+j+k]=tmp[i+j+k];
        }
}

void merge_sort(int *t, int b, int e)
{
    if(b==e-1)
        return;
    merge_sort(t, b, (b+e)/2);
    merge_sort(t, (b+e)/2, e);
    scal(t, b, (b+e)/2, e);
}

int main()
{
    int t[20];
    for(int i=0; i<20; i++)
        t[i]=20-i;

    merge_sort(t,0,20);

    for(int i=0; i<20; i++)
        cout << t[i] <<" ";

    return 0;
}
