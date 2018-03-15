/*
Binary to Decimal

Given the binary representation of a positive integer N, print the decimal value of N.

Input Format:
The first line contains the binary representation of N.

Output Format:
The first line contains the decimal value of N.

Boundary Conditions:
1 <= N <= 500

Example Input/Output 1:
Input:
101

Output:
5
*/

#include<stdio.h>
#include<string.h>
int main(int argc,char **argv){
    int i,j,k,x,n;
    x=0;k=1;
    for(i=strlen(argv[1])-1;i>=0;i--){
        if(argv[1][i]=='1'){
            x+=k;
            }
            k=k*2;
        }
    printf("%d",x);
}
