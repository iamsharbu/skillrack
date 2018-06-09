/*
Unit Digit from 1 to 5

Given an integer N as input, the program must print YES if the unit digit is from 1 to 5. Else the program must print NO.

Boundary Condition(s):
1 <= N <= 999999

Input Format:
The first line contains the value N.

Output Format:
The first line contains YES or NO.

Example Input/Output 1:
Input:
12345

Output:
YES

Example Input/Output 2:
Input:
1248

Output:
NO
*/
#include <iostream>
 
using namespace std;

int main(int argc, char** argv){
  string a;
  cin>>a;
  int x=(a[a.length()-1]-'0');
  if(x>=1&&x<=5)
      cout<<"YES";
  else
      cout<<"NO";
}
