/*
Check Column Palindrome Matrix

A matrix of size N*N is passed as input. The program must print yes if there is at least one column in the matrix is a palindrome. Else the program must print no.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.
The next N lines contain N elements each separated by space(s).

Output Format:
The first line contains "yes" or "no".

Example Input/Output 1:
Input:
3
45 23 67
98 13 67
67 25 84

Output:
no

Example Input/Output 2:
Input:
4
34 56 14 93
76 93 76 20
86 93 16 30
34 56 14 93

Output:
yes
*/
#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int i,j,k,l,m,n;
cin»n;
int a[n][n];
for(i=0;i<n;++i)for(j=0;j<n;++j)cin»a[i][j];
for(j=0;j<n;++j)
{
    for(i=0,k=n-1;i<k;++i,--k)if(a[i][j]!=a[k][j])break;
    //if(n==4)cout«j«" "«i«" "«k«endl;
    if(i>=k){cout«"yes";return 0;}
}
cout«"no";
}
}
