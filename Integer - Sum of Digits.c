/*
Integer - Sum of Digits

The program must accept an integer value N as a command line argument and print the sum of the digits in N.

Example Input/Output 1:
Input:
14

Output:
5

Example Input/Output 2:
Input:
1932

Output:
15


Note : the language specified is :. TCS
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int args,char* argv[]){
    char r[1000];
    int i=0,a=0;
    
    strcpy(r,argv[1]);
    while(r[i]!='\0') {
        a+=r[i]-'0';
        i++;
    }
    printf("%d",a);
}
