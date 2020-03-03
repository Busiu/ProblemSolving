#include <iostream>

using namespace std;

struct Node{

Node *left;
Node *right;
int val;
Node *parent;
bool isRight;
};

void inorder(Node *p)       //rekurencyjna funkcja
{
    if(p != NULL)
    {
        inorder(p->left);
        cout << p->val << " ";
        inorder(p->right);
    }
}

void postorder(Node *p)
{
    if(p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout << p->val << " ";
    }
}

void preorder(Node *p)
{
    if(p != NULL)
    {
        cout << p->val << " ";
        preorder(p->left);
        preorder(p->right);
    }
}

Node* szukanie(Node *p, int x)
{
    if(p==NULL)
        return NULL;
    if(p->val==x)
    return p;
    if(p->val<x)
         return szukanie(p->right, x);
    else
        return szukanie(p->left, x);

}

void wstaw(Node *&p, int x)
{
    Node *rodzic;
    bool strona;
    while(p!=NULL)
    {
        rodzic=p;
        if(p->val<x)
        {
            p=p->right;
            strona = true;
        }
        else if(p->val>x)
        {
            p=p->left;
            strona = false;
        }
        else
            return;
    }

    Node *e = new Node;
    e -> val = x;
    if(strona==true)
        rodzic -> right = e;
    else
        rodzic -> left = e;
}

Node* find_succ(Node* node)
{
    if(node->right!=NULL)
        return find_succ(node->right);
    else if(node->parent->left==node)       //NULL Check
        return node->parent;
    else
    {
        while(node->parent->right==node)
        {
            node = node->parent;
        }
        return node->parent;

    }
}



int main()
{
    Node * root = new Node;
    root -> val = 1;
    root -> left = NULL;

    return 0;
}
