/*

Note:This was done by my class mate

BST - Leaf Node Count

An array of N positive integers is passed as input. The program must form a binary search tree with these numbers. The first number (out of the N numbers passed as input) is the root node of the binary search tree. The program must print the count of leaf nodes present in the binary search tree.

Note: A node is a leaf node if it does not have a left or right child.

Input Format:
The first line contains N numbers, each separated by a space.

Output Format:
The first line contains the count of leaf nodes.

Boundary Conditions:
1 <= N <= 9999

Example Input/Output 1:
Input:
1 2 5 3 6 4

Output:
2

Explanation:
The leaf nodes are the nodes with the values 4 and 6.

Example Input/Output 2:
Input:
9 11 4 7 2 6 5

Output:
3

*/

#include <bits/stdc++.h>
 
using namespace std;
int A=0;
struct node{
    int n;
    node *l,*r;
}*root,*t,*t1,*v,*u;
int post(struct node* x){
    int i,j;
    i=j=-1;
    if(x==NULL)
        return 0;
    if(x->l==NULL&&x->r==NULL)
        ++A;
    if(x->l!=NULL)
        i=x->l->n;
    if(x->r!=NULL)
        j=x->r->n;
    
    post(x->l);
    post(x->r);
}
int main(int argc, char** argv){
int i=0,j,k,l,m,n,o,p;
while(cin>>j){
    if(i==0){
        root=new node();
        root->n=j;
        i=1;
    }
    else{
        t1=root;
        while(1){
            if(t1==NULL)
                break;
            v=t1;
            if(t1->n>j)
                t1=t1->l;
            else
                t1=t1->r;
        }
        u=new node();
        u->n=j;
        k=v->n;
        if(k>j)
            v->l=u;
        else
            v->r=u;
    }
}
post(root);
cout<<A;
}


