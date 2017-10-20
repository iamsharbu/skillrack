/*
Sort Numbers - Factor Count

The program must accept N positive integers as the input and sort them based on the factor count (lowest to highest factor count). If two numbers have the same factor count, order based on the value of the numbers in the ascending order.

Input Format:
The first line will contain N.
The second line will contain N positive integers separated by a space.

Output Format:
The first line will contain the N positive integers (separated by a space) ordered by their factor count.

Boundary Conditions:
2 <= N <= 1000

Example Input/Output 1:
Input:
5
18 23 100 1200 45

Output:
23 18 45 100 1200

Example Input/Output 2:
Input:
3
29 11 101

Output:
11 29 101
*/


#include <iostream>
 #include<algorithm>
using namespace std;
int main(int argc, char** argv)
{
    int i,j,k,c,n,tmp,x,a[10000],b[10000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        
    for(i=0;i<n;i++)
    {
        x=a[i];c=0;
        for(j=2;j<x;j++){
            if(x%j==0)
            c++;
        }
        b[i]=c;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++){
        
        if(b[i]>b[j]){
            
            tmp=b[i];
            b[i]=b[j];
            b[j]=tmp;
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;}
        }
    }
    for(i=0;i<n-1;i++)
    {
        c=1;j=i;
        while( (b[j]==b[j+1]) && (j+1)<n )
        {c++;j++;}
        sort((a+i),(a+i+c));
        i=i+c-1;
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}


