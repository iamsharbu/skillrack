/*
Append N Strings

N string values are passed as input. The program must append the N strings in the reverse order and print the single string as the output.

Input Format:
The first line contains N.
Next N lines contain the N string values.

Output Format:
The first line contains the combined string value.

Boundary Conditions:
2 <= Length of a String Value <= 50

Example Input/Output 1:
Input:
3
apple
boy
cat

Output:
catboyapple
*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
  int n,i;
  char a[1001][1000],r[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%s",a[i]);
  n=i;
  for(i=n;i>=0;i--)
    printf("%s",a[i]);
}


