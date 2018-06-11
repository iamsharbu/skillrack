/*
Alternate Characters in String

A string is passed as input. the program must print alternate characters in string.

Boundary Condition(s):
1 <= Length of string <= 1000
Input Format:
The first line contains the string S.
Output Format:
The first line contains thealternate character of s.

Example Input/Output 1:
Input:
garden
Output:
are

Example Input/Output 2:
Input:
drive
Output:
die
*/

#include<iostream>
using namespace std;
int main(){
  string a;
  cin>>a;
  for(int i=0;i<a.length();i+=2){
    cout<<a[i];
  }
}
