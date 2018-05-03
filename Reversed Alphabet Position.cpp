/*
Reversed Alphabet Position

Given a string S, for each letter in the string the program must print the reversed alphabet position letter.

Boundary Condition(s):
1 <= Length of String <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the specified output.

Example Input/Output 1:
Input:
abc

Output:
zyx

Example Input/Output 2:
Input:
Yarn

Output:
Bzim
*/
#include <iostream>
#include <cstring> 
using namespace std;
int main(int argc, char** argv){
  string a, x("zyxwvutsrqponmlkjihgfedcba");
  cin>>a;
  for(int i=0;i<a.length();i++){
     if(isupper(a[i])){
         int d=a[i]-'A';
         cout<<(char)toupper(x[d]);
     }else{
         int d=a[i]-'a';
         cout<<x[d];
     }
    }
  }
