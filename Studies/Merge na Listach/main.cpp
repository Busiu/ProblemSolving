#include <iostream>

using namespace std;

struct node
{
    int val;
    node * next;
};


node * mergesort(node ** head1, node ** head2) //obie listy nie moga byc puste!!!!!
{
    node * pom1 = *head1;
    node * pom2 = *head2;
    node * pom;

    if(pom1->val < pom2->val)
    {
        pom = pom1;
        pom1 = pom1->next;
    }
    else
    {
        pom = pom2;
        pom2 = pom2->next;
    }

    node * koniec = pom;

    while(pom1!=NULL && pom2!=NULL)
    {
        if(pom1->val < pom2->val)
        {
            pom->next = pom1;
            pom = pom->next;
            pom1=pom1->next;
        }
        else
        {
            pom->next = pom2;
            pom = pom->next;
            pom2=pom2->next;
        }
    }

    if(pom1==NULL)
        pom->next = pom2;
    else
        pom->next = pom1;

    return koniec;

}

void wypisz(node * head)
{
    while(head!=NULL)
    {
        cout << head->val << endl;
        head=head->next;
    }
}


int main()
{
    node * a,* b,* c,* d,* e;
    a = new node;
    b = new node;
    c = new node;
    d = new node;
    e = new node;
    a->val=1;
    b->val=4;
    c->val=6;
    d->val=2;
    e->val=3;

    a->next=b;
    b->next=c;
    c->next=NULL;
    d->next=e;
    e->next=NULL;

    wypisz(a);
    wypisz(d);

    a = mergesort(&a, &d);

    cout << endl;

    wypisz(a);

    return 0;
}
