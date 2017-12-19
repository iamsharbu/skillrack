/*
Unique Numbers Count Within Range

Given N numbers, the program must find and print the count C of the distinct(unique) numbers which are within a given range inclusive of R1 and R2.

Input Format:
The first line contains N, R1 and R2 separated by a space.
The second line contains N positive integers separated by a space.

Output Format:
The first line contains the count C.

Boundary Conditions:
1 <= N <= 9999
1 <= R1, R2 <= 999999
R1 <= R2

Example Input/Output 1:
Input:
7 19 44
100 19 51 32 41 89 32

Output:
3

Explanation:
The three unique numbers within the given range (21 to 44 inclusive) are 19, 32 and 41

*/


#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
  long int a,l,b,c,d[99999]={0};
  cin>>a>>b>>c;
  for(int i=0;i<a;i++){
    cin>>l;
    d[l]++;
  }
  l=0;
   for(int i=b;i<=c;i++){
     if(d[i])
        l++;
   }
   cout<<l;
}


