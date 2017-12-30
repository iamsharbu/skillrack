/*
Reverse the string value till last vowel

Given a string S, the program must reverse the string till last vowel. (All alphabets will be in smaller case and there will be no space within the string S).

Input Format:
The first line contains S.

Output Format:
The first line contains the string value reversed till last vowel

Boundary Conditions:
2 <= Length of S <= 100

Example Input/Output 1:
Input:
manager

Output:
eganamr

Explanation:
The last vowel is e. Hence manage is reversed and r is retained as such.

*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
  char a[1000];
  scanf("%s",a);
  int i=0;
  for(i=strlen(a)-1;i>=0;i--)
  {
      if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]
          =='o'||a[i]=='u'){
          break;

      }
  }
  int m=i;
  //printf("%d",m);
  char b[1000];
  strcpy(b,a);
  for(i=m;i>=0;i--)
    printf("%c",b[i]);
  for(i=m+1;i<strlen(a);i++)
    printf("%c",a[i]);

}


