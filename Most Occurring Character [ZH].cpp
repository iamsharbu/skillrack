/*
Most Occurring Character [ZH]

Given a string S, the program must print the most occurring character C in S. Priority must be given to the first most occurring character when more than one characters have the same number of occurrence.

Input Format:
The first line contains S

Output Format:
The first line contains the character C.

Boundary Conditions:
2 <= Length of S <= 1000

Example Input/Output 1:
Input:
onechar

Output:
o

Example Input/Output 2:
Input:
mississippi

Output:
s
*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
  string s;
  cin>>s;
  int a[26]={0},i,j,k=0,l;
  char m;
  for(i=0;i<s.length();i++){
    a[s[i]-'a']++;
    if(a[s[i]-'a']>k){
      k=a[s[i]-'a'];
      m=s[i];
     }
    }
  cout<<m;
}
