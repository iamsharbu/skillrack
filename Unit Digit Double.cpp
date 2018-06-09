/*
Unit Digit Double

Given an array of integers of size N, the program must print the twice the value of the unit digit of each element.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains the value of N.
The second line contains the N integers.

Output Format:
The first line contains the twice the value of the Unit Digit of each element.

Example Input/Output 1:
Input:
5
23 44 65 32 78

Output:
6 8 10 4 16

Example Input/Output 2:
Input:
8
684 71 342 55 166 734 211 545

Output:
8 2 4 10 12 8 2 10
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv){
  string a;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
     cin>>a;
     cout<<(a[a.length()-1]-'0')*2<<" ";
  }
}
