/*
Reverse String Till Underscore

String S is passed as the input to the program. S may or may not have a single underscore embedded in it. The program must reverse the String S till the first underscore and print it as the output.

Input Format:
The first line contains S.

Output Format:
The first line contains the string S modified based on the given conditions.

Boundary Conditions:
Length of S is from 3 to 100.

Example Input/Output 1:
Input:
abcd_pqrs

Output:
dcba_pqrs

Example Input/Output 2:
Input:
_kilo

Output:
_kilo

Example Input/Output 3:
Input:
nounderscore

Output:
erocsrednuon
*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
  int i,j,f=0;
  char a[999];
  scanf("%[^\n]%*c",a);
  for(i=0;i<strlen(a);i++){
    if(a[i]=='_'){
        for(j=i-1;j>=0;j--)
            printf("%c",a[j]);
        f=1;
      }
        if(f==1)
          printf("%c",a[i]);
   }
  if(f==0){
      for(i=strlen(a)-1;i>=0;i--)
      printf("%c",a[i]);
  }
}
