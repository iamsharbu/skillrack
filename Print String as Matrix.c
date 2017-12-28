/*
Print String as Matrix

A string S is passed as the input and the input string must be printed as a matrix of C columns where each column contains an alphabet.

Input Format:
The first line contains S.
The second line contains C.

Output Format:
The matrix with C columns containing the string value.

Boundary Conditions:
2 <= Length of a String Value <= 500
2 <= C <= 10

Example Input/Output 1:
Input:
abcdefghijklmnop
5

Output:
abcde
fghij
klmno
p


*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
int i,j;
char a[1000]={'\0'};
int n;
scanf("%s",a);
scanf("%d",&n);
int x=n;
for(j=0;j<strlen(a);j++)
{
printf("%c",a[j]);
if(j==x-1){
printf("\n");
x+=n;
    
}
}
    
}


