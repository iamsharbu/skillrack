/*
Note:this is not solved by me

A truck needs to deliver vegetables from a farm to several shops. The truck driver has decided to visit the nearest shop from the farm first and then the second nearest shop from the farm and so on. To travel from farm to the shops, the truck has to travel through cities. There are N roads (one-way) connecting two different locations (Location can be any of these - farm, city or shop) are passed as input. The farm has no incoming road and the shops have no outgoing road. Print the shops in the order of their visit by the truck. (Hint: Cities are identified by the fact that they have outgoing roads.)

Note: The distance from the farm to a shop is calculated by the number of cities it has to cross to reach the shop.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.
The next lines contain the name of the two locations (source and destination) connected by a road separated by space(s).

Output Format:
The first line contains the name of the shops separated by a space.

Example Input/Output 1:
Input:
5
farm mid1
mid1 mid2
mid2 shop1
mid2 mid3
mid3 shop2

Output:
shop1 shop2

Explanation:
shop1 is visited through the route farm->mid1->mid2->shop1
shop2 is visited through the route farm->mid1->mid2->mid3->shop2

Example Input/Output 2:
Input:
8
a b
a c
a d
c e
e f
d h
f g
b f

Output:
h g

Explanation:
h is visited through the route a->d->h
g is visited through the route a->b->f->g
 */
 
 #include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv)
{
    int i,j,k,s=-1,n,d[100];
    string a[100],b[100],c[100],x,t;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    x=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(b[i]==a[j])
                break;
        if(j==n)
            c[++s]=b[i];
    }
    for(i=0;i<=s;i++)
    {
        k=0;
        t=c[i];
        while(x!=t)
        {
            k++;
            for(j=0;j<n;j++)
                if(t==b[j])
                {
                    t=a[j];
                    break;
                }
        }
        d[i]=k;
    }
    for(i=0;i<s;i++)
        for(j=i+1;j<=s;j++)
            if(d[i]>d[j])
            {
                k=d[i];
                d[i]=d[j];
                d[j]=k;
                x=c[i];
                c[i]=c[j];
                c[j]=x;
            }
            else if(c[i]==c[j])
                c[j]="*";
    for(i=0;i<=s;i++)
        if(c[i]!="*")
            cout<<c[i]<<" ";
}


