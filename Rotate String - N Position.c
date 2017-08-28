/*
Rotate String - N Positions

A string S of length L is passed as the input. The program must rotate the string S by N position in forward direction and print the result as the output.

Input Format:
The first line will contain the value of S.
The second line will contain N.

Output Format:
The first line will contain the rotated string value.

Boundary Conditions:
The length L of the string S is from 3 to 100.
0 <= N <= L

Example Input/Output 1:
Input:
cricket
2

Output:
etcrick

Example Input/Output 2:
Input:
truth
5

Output:
truth

*/
#include<stdio.h>
#include <string.h>
int main(){
            char b[99999],a[99999];
            int j,n,i=0,d;
            scanf("%s %d",&a,&n);
            d=n-1;
            j=strlen(a)-n;
            for(;j<strlen(a);j++)
                    printf("%c",a[j]);
            for(;i<strlen(a)-n;i++,d++)
                    printf("%c",a[i]);   
                
    }


