/*
Program ID- 3128 Solved By 304 Users 


Given a string S as the input, print the distinct alphabets in S that occur more than once. The alphabets must be printed based on the order of their occurrence in S.

Input Format:
The first line contains S.

Output Format:
The first line contains the distinct alphabets in S that occur more than once.

Boundary Conditions:
2 <= LENGTH of S <= 200

Example Input/Output 1:
Input:
Apple

Output:
p

Example Input/Output 2:
Input:
environment

Output:
en
*/

#include <iostream>
#include<map>
#include<cstring>
using namespace std;
int main(int argc, char** argv){
  char a[1000];
  map<char,int> b;
  cin>>a;
  int n=strlen(a);
  for(int i=0;i<n;i++)
     b[a[i]]++;
  for(int i=0;i<n;i++)
    if(b[a[i]]>=2){
        cout<<a[i]; 
        b[a[i]]=0;
      }
  }
