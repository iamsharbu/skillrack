/*
Same Unit Digit Adjacent Numbers

A matrix of size R*C (R rows and C columns) containing numbers (positive integer values) is passed as input. The program must print the count C of numbers in a given cell which has at least one adjacent cell (in the same row) containing a number with the same unit digit.

Input Format:
The first line contains R and C separated by a space.
Next R lines contains C values separated by a space.

Output Format:
The first line contains C.

Boundary Conditions:
1 <= R, C <= 100

Example Input/Output 1:
Input:
4 3
20 27 67
13 74 100
37 90 97
53 75 44

Output:
2

Explanation:
The numbers are 27 67 in the first row where both have 7 as their unit digit.

*/



#include <iostream>
 
using namespace std;
int main(int argc, char** argv)
{
    int a[100][100],m,k=0,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
      }
    }
    int t=0;
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
          if ((j+1<n && j-1>=0) &&(a[i][j]%10==a[i][j-1]%10 || a[i][j]%10 ==a[i][j+1]%10)){
              t++;
              }
        else if(j+1<n&&a[i][j]%10==a[i][j+1]%10){
            t++;
            }
        else if(j-1>=0&&a[i][j]%10==a[i][j-1]%10){
            t++;
            }
      }       
    }
    cout<<t;
}


