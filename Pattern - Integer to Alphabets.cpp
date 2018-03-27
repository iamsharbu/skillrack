/*
Pattern - Integer to Alphabets

Given a number N, convert the number to character values based on alphabet positions as given in Example Input/Output.

Hint: Use modulo and division operator repeatedly to obtain the pattern.

Boundary Condition(s):
1 <= N <= 10000000

Input Format:
The first line contains N.

Output Format:
The first line contains the string representation.

Example Input/Output 1:
Input:
10

Output:
J

Example Input/Output 2:
Input:
28

Output:
AB
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv){
  int i,j,k,n;
  string a="";
  cin>>n;
  if(n==26){
    cout<<"Z"; return 0;}
    while(n>0){
      k=n%26;
      if(k==0)
        k=26;
      a+=(char)k+64;
      n/=26;
  }
  for(i=a.length()-1;i>=0;i--)
    cout<<a[i];
}
		
