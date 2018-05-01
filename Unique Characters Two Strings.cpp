/*
Unique Characters Two Strings

Two strings S1 and S2 are passed as input. The program must print the number of unique characters used in both the strings.

Boundary Condition(s):
1 <= Length of strings <= 1000

Input Format:
The first line contains S1 and S2 separated by space(s).

Output Format:
The first line contains the number of unique characters.

Example Input/Output 1:
Input:
owl pow

Output:
4

Example Input/Output 2:
Input:
now won

Output:
3

*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
  string a,b;
  map<char,int>c;
  cin>>a>>b;
  for(int i=0;i<a.length();i++)
      c[a[i]]++;
  for(int j=0;j<b.length();j++)
      c[b[j]]++;
  cout<<c.size();
}
