/*
Program ID- 3062 Solved By 275 Users 
Pattern Printing N - Sequence 001

The program must accept an integer N and print the pattern as shown in the Example Input/Output.

Input Format:
The first line contains N.

Output Format:
N lines containing the pattern as shown in the Example Input/Output.

Boundary Conditions:
2 <=  N <= 100

Example Input/Output 1:
Input:
4

Output:
1 2 3 4
9 10 11 12
13 14 15 16
5 6 7 8

Example Input/Output 2:
Input:
7

Output:
1 2 3 4 5 6 7
15 16 17 18 19 20 21
29 30 31 32 33 34 35
43 44 45 46 47 48 49
36 37 38 39 40 41 42
22 23 24 25 26 27 28
8 9 10 11 12 13 14

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
      int n,a[1000][1000],k=1;
      cin>>n;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=k;
            k++;
       }
      }
      for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
          {
            if(i%2!=0)
            cout<<a[i][j]<<" ";
          }
      if(i%2!=0)
        cout<<endl;
      }

      for(int i=n;i>1;i--) {
          for(int j=1;j<=n;j++)
            {
              if(i%2==0)
                cout<<a[i][j]<<" ";
            }
       if(i%2==0)
        cout<<endl;
      }   
   }

