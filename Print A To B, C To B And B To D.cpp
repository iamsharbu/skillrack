/*
Print A To B, C To B And B To D

Given four integers A, B, C and D as input, the program must print the numbers from A to B in the first line, C to B in the second line and B to D in the third line.

Boundary Condition(s):
1 <= A, B, C, D <= 1000

Input Format:
The first line contains the values of A, B, C and D separated by space(s).

Output Format:
The first line contains values from A to B separated by space.
The second line contains values from C to B separated by space.
The third line contains values from B to D separated by space.

Example Input/Output 1:
Input:
1 2 3 4

Output:
1 2
3 2
2 3 4

Example Input/Output 2:
Input:
28 35 47 58

Output:
28 29 30 31 32 33 34 35
47 46 45 44 43 42 41 40 39 38 37 36 35
35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58
*/

#include <iostream>
using namespace std; 
void pr(int a,int b){
    for(int i=a;i<=b;i++)
        cout<<i<<" ";
    cout<<endl;
}
void prr(int a,int b){
    for(int i=b;i>=a;i--)
        cout<<i<<" ";
    cout<<endl;
}
int main(int argc, char** argv){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  pr(a,b);
  prr(b,c);
  pr(b,d);
}
