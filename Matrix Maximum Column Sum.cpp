/*
Matrix Maximum Column Sum

An integer matrix of size N*N is given as input. The program must print the maximum column-wise sum of the matrix.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains the value N.
The next N lines contain N elements each separated by space(s).

Output Format:
The first N lines contain the mirror image of the given matrix.

Example Input/Output 1:
Input:
3
1 2 3
4 5 6
7 8 9

Output:
18

Example Input/Output 2:
Input:
6
7 9 8 10 8 5 
4 1 8 10 10 3 
5 10 5 6 6 4 
5 5 7 4 4 3 
5 10 10 7 5 7 
5 1 4 7 1 1

Output:
44
*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    int a;
    cin>>a;
    int b[a][a],ans[a]={0};
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
          cin>>b[i][j];
    }

    for(int i=0;i<a;i++){
      for(int j=0;j<a;j++){
          ans[i]=ans[i]+b[j][i];
      } 

    }
    cout<<*max_element(ans,ans+a);
}

