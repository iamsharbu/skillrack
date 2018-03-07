/*
Remove Alternate Duplicate Chars [ZH]

Given a string S, remove the alternate duplicate characters from S. That is keep only the odd occurrences of a character in the string S.

Input Format:
The first line contains S.

Output Format:
The first line contains the output string value based on the given conditions.

Boundary Condition:
1 <= Length of S <= 1000

Example Input/Output 1:
Input:
I have got gold

Output:
I havegot ld

Example Input/Output 2:
Input:
may i come in

Output:
may icoe n
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){
    char s[10000];
    scanf("%[^\n]s",s);
    int a[260]={0},i;
    for(i=0;i<strlen(s);++i){
          ++a[s[i]];
          if(a[s[i]]%2==1)
            cout«s[i];
    }
}
