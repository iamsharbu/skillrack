/*
Count of Uppercase Letters

A string is passed as input. The program must print the count of uppercase letters.

Boundary Condition(s):
1 <= length of string <= 1000

Input Format:
The first line contains the string.

Output Format:
The first line contains the count of uppercase letters.

Example Input/Output 1:
Input:
aPpLe

Output:
2

Example Input/Output 2:
Input:
MoNGoDB

Output:
5
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
  string a;
  cin>>a;
  int x=a.length(),b=0;
  while(x--){
      if(a[x]>='A'&&a[x]<='Z')
          b++;
  }
  cout<<b;
}
