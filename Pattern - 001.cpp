/*
Pattern - 001

Given the number of rows N, print the numbers from 1 to N*N , such that N elements are printed in each row.

Input Format :
The first line contains the number of rows N.

Output Format :
First N*N numbers such that each row contains N numbers. 

Example Input/Output 1 :
Input : 
3
Output :
1 2 3
4 5 6
7 8 9 

Example Input/Output 2:
Input :
 6
Output :
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36
*/


#include <iostream>
using namespace std;
int main(int argc, char** argv){
  int a,x=0;
  cin>>a;
  for(int i=1;i<=a*a;i++){
          cout<<i<<" ";
          if(i%a==0)
          cout<<endl;
      }
}


