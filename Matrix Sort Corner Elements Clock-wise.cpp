/*
Matrix Sort Corner Elements Clock-wise

An integer matrix of size R*C is passed as input. The program must sort the elements at the corner position of the matrix in clock-wise direction and print the matrix.

Boundary Condition(s):
1 <= R, C <= 1000

Input Format:
The first line contains the value of R and C separated by space(s).
The next R lines contain C elements each separated by space(s).

Output Format:
The first R lines contain C elements each separated by a space with corner elements sorted in clock-wise direction.

Example Input/Output 1:
Input:
3 3
9 2 7
4 5 6
3 8 1

Output:
1 2 3
4 5 6
9 8 7

Example Input/Output 2:
Input:
4 3
924 450 994 
58 146 589 
526 548 407 
471 145 779

Output:
471 450 779
58 146 589
526 548 407
994 145 924
*/


#include <iostream>
 #include<algorithm>
using namespace std;

int main(int argc, char** argv){
  int m,n;
  cin>>m>>n;
  int a[m][n],x[4],c=0;
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cin>>a[i][j];
          if(i==0&&j==0||i==m-1&&j==n-1||i==0&&j==n-1||i==m-1&&j==0){
              x[c]=a[i][j];
              c++;
          }
      }
  }
  sort(x,x+c);
  a[0][0]=x[0];
  a[0][n-1]=x[1];
  a[m-1][0]=x[3];
  a[m-1][n-1]=x[2];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }
  }
