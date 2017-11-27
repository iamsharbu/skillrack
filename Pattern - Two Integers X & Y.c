/*
Pattern - Two Integers X & Y

Given two positive integers value X & Y as input, print the pattern as in the Example Input/Output section.

Input Format:
The first line contains X and Y separated by a space.

Output Format:
The pattern as described in the Example Input/Output section.

Boundary Conditions:
2 <= X, Y <= 50

Example Input/Output 1:
Input:
10 20

Output:
11 19 12 18 13 17 14 16 15

Example Input/Output 2:
Input:
9 22

Output:
10 21 11 20 12 19 13 18 14 17 15 16
*/



#include <iostream>
 #include<stdio.h>
 #include<cmath>
using namespace std;

int main(int argc, char** argv){
  int x=0,r=0,a,b,c,z[1000];
  cin>>a>>b;c=ceil((a+b)/2);
  for(int i=a+1;i<=c;i++){   
        r++;
        z[x]=i;
        x+=2;
    }
 for(int j=b-1,x=1;j>c;j--){
      r++;
      z[x]=j;
      x=x+2;
   }
 for(int i=0;i<r;i++)
   cout<<z[i]<<" ";
}
