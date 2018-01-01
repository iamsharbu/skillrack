/*
Pattern - Asterisk Edge

Given a positive integer value N as input, print the pattern as in the Example Input/Output section. The outer edges must be represented by asterisk * and rest by hash #

Input Format:
The first line contains N.

Output Format:
The pattern as described in the Example Input/Output section.

Boundary Conditions:
2 <= N <= 50

Example Input/Output 1:
Input:
5

Output:
*****
*###*
*###*
*###*
*****

Example Input/Output 2:
Input:
6

Output:
******
*####*
*####*
*####*
*####*
******
*/

#include<stdio.h>
#include <stdlib.h>
int main(){
  int a;
  scanf("%d",&a);
  for(int i=0;i<a;i++){
      for(int j=0;j<a;j++){
          if(i==0||j==0||i==(a-1)||j==(a-1))
            printf("*");
          else 
            printf("#");
      }
      printf("\n");
    }
}

