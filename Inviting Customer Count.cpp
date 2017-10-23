/*
Inviting Customer Count

A company plans a viral marketing strategy in which an existing customer will invite N other new customers every day for D days. At the end of the Dth day, a customer will get a gift and must leave (the left customers will not invite any new customers on D+1 th day). A customer who has got a gift and left will not be invited again. On Day 1 there will be only one customer to begin with and this customer will leave at the end of the Dth day. Given N and D, the program must calculate the number of customers who are eligible to invite new customers on the Tth day.

Input Format:
The first line will contain N and D separated by a space.
The second line will contain T.

Output Format:
The first line will contain the number of customers who are eligible to invite new customers on the Tth day

Boundary Conditions:
2 <= N <= 5
3 <= D <= 6
1 <= T <= 50

Example Input/Output 1:
Input:
2 6
3

Output:
9

Example Input/Output 2:
Input:
2 6
7

Output:
726

Explanation:
Customers remaining at the end of day 1 is = 3
Customers remaining at the end of day 2 is = 9
Customers remaining at the end of day 3 is = 27
Customers remaining at the end of day 4 is = 81
Customers remaining at the end of day 5 is = 243
Customers remaining at the end of day 6 is = 726 (3 leave)
So customers who can invite on 7th day = 726
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
int n,k,t,i,j,m=1,b=0,z,x=0,c=0,w;
cin>>n>>k>>t;
m+=n;
j=m;
int a[10000];
for(i=1;i<t;i++)
{
    a[b]=j;
    c++;
    if(c>=k){
        w=a[x];
    for(z=x;z<=b;z++)
    a[z]=a[z]-w;
    x++;}
    b++;
    j=a[b-1]*m;
}
cout<<a[b-1];
}

