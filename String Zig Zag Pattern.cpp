/*
Program ID- 3072 Solved By 146 Users 
String Zig Zag Pattern

Given a string S and an integer N as the input, the program must split the string into groups whose size is N and print them as the output in separate lines in a zig zag manner. If the last group size is less than N then the remaining letters must be filled with asterisk as shown in the Example Input/Output.

Input Format:
The first line contains S.
The second line contains N.

Output Format:
LENGTH(S)/N + LENGTH(S)%N lines containing the desired pattern.

Boundary Conditions:
4 <= LENGTH(S) <= 500
2 <= N <= LENGTH(S)

Example Input/Output 1:
Input:
ENVIRONMENT
3

Output:
ENV
ORI
NME
*TN

Example Input/Output 2:
Input:
ENVIRONMENT
4

Output:
ENVI
MNOR
ENT*

Example Input/Output 3:
Input:
EVERYDAY
2

Output:
EV
RE
YD
YA

*/
#include <iostream>
using namespace std;
int main(int argc, char** argv){
      int i,j,k,n,m=0;
      string s;
      cin>>s>>n;
      k=s.length();
      for(i=0;i<k;i++){
          if(m==0){
              for(j=i;j<=i+n-1;j++){
                  if(j>=k)
                    cout<<"*";
                  else
                    cout<<s[j];
              }
              i+=n-1;
              m=1;
          }
          else{
              for(j=i+n-1;j>=i;j--){
                  if(j>=k)
                    cout<<"*";
                  else
                    cout<<s[j];
              }
              i+=n-1;
              m=0;
          }
          cout<<endl;
      }
}

