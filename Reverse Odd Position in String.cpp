/*
Reverse Odd Position in String

Given a string S, the program must reverse the characters present in odd positions of the string S.

Boundary Condition(s):
1 <= Length of S <= 100

Input Format:
The first line contains S.

Output Format:
The first line contains the string value with the characters in the odd positions of S reversed

Example Input/Output 1:
Input:
barcode

Output:
eaocrdb

Example Input/Output 2:
Input:
Mediterranean

Output:
neeiaerrtndaM
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
  string a;
  cin>>a;
  int x=a.length()-1;
  if(x%2!=0){
      x--;
      }
  for(int i=0;i<a.length();i++){
      if(i%2!=0)
      cout<<a[i];
      else{
      cout<<a[x];
      x=x-2;

      }
   }
}
