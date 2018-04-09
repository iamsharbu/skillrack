/*
note : not solved by me


IPv4 Address Validity

Given an IPv4 address as a string, check if the address is valid. Print Valid if the address is valid else print Invalid. IPv4 address has 4 blocks of 8 bit (unsigned) numbers ranging from 0 to 255 separated by a . (dot).

Boundary Condition(s):
1 <= Length of address <= 50

Input Format:
The first line contains the IP address.

Output Format:
The first line contains Valid or Invalid.

Example Input/Output 1:
Input:
127.0.0.1

Output:
Valid

Example Input/Output 2:
Input:
266.2.9.34.12

Output:
Invalid

Explanation:
As 266 is present in the IP address
*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    int i,j,k=0,s=0;
    char a[10000];
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
        s=(s*10)+(a[i]-48);
        if(a[i]=='.'){
            k++;
            s=0;
        }

        if(s>255||a[0]=='.'||(a[i]=='.'&&a[i+1]=='.'))
            break;
    }
    if(k!=3||i<strlen(a))
      printf("Invalid");
    else
      printf("Valid");
}
