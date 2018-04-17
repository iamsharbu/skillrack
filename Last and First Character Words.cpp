/*
Last and First Character Words

Given a string S with spaces, the program must print only the words having it's first letter same as the last letter of the previous word. If no such word matches the specified condition print -1.

Boundary Condition(s):
1 <= Length of S1 <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the specified output.

Example Input/Output 1:
Input:
word dove think yellow wood

Output:
dove wood

Example Input/Output 2:
Input:
mint hen bob jack

Output:
-1
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int c=1,l=0;
    string a[1000];
    cin>>a[0];
    while(cin>>a[c]){
        if(a[c][0]==a[c-1][a[c-1].length()-1]){
        cout<<a[c]<<" ";
        l++;
      }
        c++;

    }
    if(l==0)
      cout<<"-1";
 }

