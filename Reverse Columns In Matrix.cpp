/*
Reverse Columns In Matrix

Given a square matrix of size N, reverse column values in the matrix and print the modified matrix as the output.

Boundary Condition:
1<= N <= 100

Input Format:
The first line contains N.
The next N lines contain the elements of matrix.

Output Format:
The first N lines of the output contain the given matrix with columns reversed.

Example Input/Output 1:
Input:
3
1 2 3
4 5 6
7 8 9

Output:
7 8 9
4 5 6
1 2 3

Example Input/Output 2:
Input:
5
34 12 4565 34 674
19 62 455 844 23
764 316 23 235 123
653 205 237 185 44
71 89 232 345 823

Output:
71 89 232 345 823
653 205 237 185 44
764 316 23 235 123
19 62 455 844 23
34 12 4565 34 674
*/


#include <iostream>
 
using namespace std;

int main(int argc, char** argv){
  int a[100][100],n;
  cin>>n;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>a[i][j];
      }
  }
   for(int i=n-1;i>=0;i--){
      for(int j=0;j<n;j++){
          cout<<a[i][j]<<" ";
      }
      cout<<endl;
  }

}
