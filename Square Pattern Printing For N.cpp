/*
Square Pattern Printing For N

Given N, print the pattern as described in the Example Input/Output.

Input Format:
The first line will contain N.

Output Format:
N lines will contain the required pattern.

Boundary Conditions:
1 <= N <= 50

Example Input/Output 1:
Input:
5

Output:
1 2 3 4 5
2 4 6 8 4
4 8 12 10 8
8 16 18 20 10
16 26 36 28 20

Example Input/Output 2:
Input:
4

Output:
1 2 3 4
2 4 6 3
4 8 7 6
8 11 14 7

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv)
{
long int n,i,j,k,a[1000][1000],l=1;
cin>>n;
for(i=0;i<n;i++)
{
    for(j=0;j<=n+1;j++)
    {
        if(j==0||j==n+1)
        a[i][j]=0;
        else if(i==0)
        {
            a[i][j]=l;
            l++;
        }
    }
}
for(i=1;i<n;i++)
{
    for(j=1;j<=n;j++)
    {
        a[i][j]=a[i-1][j-1]+a[i-1][j+1];
    }
}
for(i=0;i<n;i++)
{
    for(j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
}
}
