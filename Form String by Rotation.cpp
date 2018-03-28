/*
Form String by Rotation

Given two strings S1 and S2, print yes if S2 can be obtained by rotating the string S1. Else print no.

Boundary Condition(s):
1 <= Length of S1, S2 <= 10000

Input Format:
The first line contains S1 and S2 separated by space.

Output Format:
The first line contains Yes if S2 can be obtained by rotating S1 else No.

Example Input/Output 1:
Input:
hello llohe

Output:
Yes

Example Input/Output 2:
Input:
Question tionseuQ

Output:
No
*/
#include <iostream>
 
using namespace std;

int main(int argc, char** argv){
  string a,b;
  cin>>a>>b;
  int i,j,k,n;
  for(i=0;i<a.length();i++){
    string x="";
    for(j=i;j<a.length();j++)x+=a[j];
    for(j=0;j<i;j++)x+=a[j];
    if(x==b){
      cout<<"Yes"; 
      return 0;
        }
  }
  cout<<"No";
}		
