/*
Pattern - Double Zig Zag

Given an even positive integer N as the input, print the pattern as given in the Example Input/Output section.

Input Format:
The first line contains N.

Output Format:
N lines containing the desired pattern.

Boundary Conditions:
2 <= N <= 100

Example Input/Output 1:
Input:
6

Output:
1 2 3 19 20 21 
6 5 4 24 23 22 
7 8 9 25 26 27 
12 11 10 30 29 28 
13 14 15 31 32 33 
18 17 16 36 35 34
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n,i,j,k=0,f=0,a[100][100];
    cin>>n;
    for(i=0;i<n;i++){
        if(i%2==0)
            for(j=0;j<n/2;j++)
              a[i][j]=++k;
            else
              for(j=n/2-1;j>=0;j--)
                a[i][j]=++k;
    }
    for(i=0;i<n;i++){
        if(i%2==0)
            for(j=n/2;j<n;j++)
              a[i][j]=++k;
        else
            for(j=n-1;j>=n/2;j--)
              a[i][j]=++k;
    }
    for(i=0;i<n;i++){
      for(j=0;j<n;j++)
          cout<<a[i][j]<<" ";
      cout<<endl;
    }
}


