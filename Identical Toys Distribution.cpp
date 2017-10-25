Identical Toys Distribution

Given the number of T identical toys, find the number of ways W to distribute them among N children.

Input Format:
The first line will contain T and N separated by a space.

Output Format:
The first line will contain W. As W can be large, print the answer as modulo 1000000007

Boundary Conditions:
1 <= T, N <= 1000

Example Input/Output 1:
Input:
2 2

Output:
3

Explanation:
The three ways to disribute 2 toys among 2 children are (2,0) (0,2) (1,1)
*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
    int m,n,i,j,k,l;
    cin>>m>>n;
    int a[m+1][n+1];
    for(i=0;i<=m;i++)
    for(j=0;j<=n;j++){
        if(i==0) a[i][j]=1;
        else a[i][j]=0;
    }
    for(i=1;i<=m;i++)
    for(j=0;j<=n;++j){
        k=0;l=0;
        if(i-1>=0)k=a[i-1][j];
        if(j-1>=0)l=a[i][j-1];
        a[i][j]=(k+l)%1000000007;
        }
    cout<<a[m][n-1];
}



