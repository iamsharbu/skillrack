/*
Maximum Product

Given N numbers, print the two numbers that yields maximum product.

Boundary Condition :

2 <= N <= 1000

Input Format :

The first line contains the number of elements N.
The second line contains n elements separated by a space.

Output Format :

The first line contains two numbers that yields maximum product separated by a space.

Example Input/Output 1:
Input:
6
-9 25 -5 2 1 7

Output:
7 25

*/

#include <bits/stdc++.h>
 
using namespace std;
int rd(int arr[],int n){
    int j=0;
    if(n==0||n==1)
      return n;
    for(int i=0;i<n-1;i++)
            if(arr[i]!=arr[i+1])
                arr[j++]=arr[i];
        arr[j++]=arr[n-1];
        return j;
}

int main(int argc, char** argv){
    int a,b[10000];
    cin>>a;
    for(int i=0;i<a;i++)
      cin>>b[i];

    int n=rd(b,a);
    sort(b,b+n);
    if((b[0]*b[1])<(b[n-2]*b[n-1]))
      cout<<b[n-2]<<" "<<b[n-1];
    else
      cout<<b[0]<<" "<<b[1];
}
