/*
Bar Graph Pattern

Given an integer N, the program must print the pattern as shown in the Example Input/Output section.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.
The second line contains N integers separated by space.

Output Format:
The pattern is printed as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
3
2 1 3

Output:
--*
*-*
***

Example Input/Output 2:
Input:
6
6 3 2 4 2 1

Output:
*-----
*-----
*--*--
**-*--
*****-
******
*/

#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n,i,j,k,l,f,m=0; 
    cin>>n; 
    int a[n] ; 
    for(i=0;i<n;i++){
      cin>>a[i];
      if(a[i]>m)
        m =a[i]; 
        }
    char b[m][n];
    for(i=0;i< m;i++) 
       for(j=0;j<n;j++)
         b[i][j]='-';

    for(j=0;j<n;j++) 
        for(i=m-1;i>=m-a[j];i-- )
          b[i][j]='*'; 

    for(i=0;i<m;i++){
      for(j=0;j<n;j++)
        cout<<b[i][j] ; 
         cout<<endl;
    }
}
