/*
First and Last X Digits Equal

Given a number N, print if the first X digits are equal to the last X digits.

Boundary Condition:
2 <= X <= 5

Input Format:
The first line contains N and X separated by a space.

Output Format:
The first line contains Yes or No

Example Input/Output 1:
Input:
225622 2

Output:
Yes

Example Input/Output 2:
Input:
5689165 3

Output:
No

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
  string s;
  int i,j,k,n,c=0;
  cin>>s>>n;
  k=s.length();
  for(i=0,j=k-n;i<n,j<k;i++,j++){
      if(s[i]==s[j])
        c++;
  }
  if(c==n)
    cout<<"Yes";
  else 
    cout<<"No";
}


