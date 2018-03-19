/*
Rotated Triangle Pattern

Given an integer N, print the pattern as given in Example Input/Output section.
Note: N is always an odd number.

Boundary Condition(s):
1 <= N <= 9999

Input Format:
The first line contains N.

Output Format:
The first N lines contain the desired pattern.

Example Input/Output 1:
Input:
7

Output:
1
2 8
3 9 13
4 10 14 16
5 11 15
6 12
7

Example Input/Output 2:
Input:
5

Output:
1
2 6
3 7 9
4 8
5
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    int i,j,k,t=0,n,a[10000][5000];
    
    cin>>n;k=n/2;
    for(j=0;j<=k;j++)
        for(i=j;i<n-j;i++)
            a[i][j]=++t;
            
    for(i=0;i<n;i++){ 
        for(j=0;j<=k;j++)
    if(a[i][j]>0)   
        cout<<a[i][j]<<" ";
    cout<<endl;
        
    }
    


}
