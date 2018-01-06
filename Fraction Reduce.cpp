/*
Fraction Reduce

Given a fraction A/B the program must reduce it and print the output.

Input Format:
The first line contains A/B

Output Format:
The first line contains C/D where C/D is the reduced form of A/B.

Boundary Conditions:
1 <= A,B <= 9999999

Example Input/Output 1:
Input:
15/25

Output:
3/5

Example Input/Output 2:
Input:
40/10

Output:
4/1
*/

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
  int a,b;
  scanf("%d/%d",&a,&b);
  int x=__gcd(a,b);
  printf("%d/%d",a/x,b/x);
}
