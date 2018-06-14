/*
Replace Continuously Repeated Characters

A string S is passed as input. The program must replace all the continuously repeating characters in the string with just one occurrence of that specific character which is repeating.

Boundary Condition(s):
1 <= Length of string <= 1000

Input Format:
The first line contains the string S.

Output Format:
The first line contains the modified string.

Example Input/Output 1:
Input:
hello

Output:
helo

Example Input/Output 2:
Input:
aabbaaabbcccc

Output:
ababc
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]==a[i+1]){
            cout<<a[i];
            while(a[i]==a[i+1]){
                i++;
            }

        }else{
                cout<<a[i];
          }
      }
  }
