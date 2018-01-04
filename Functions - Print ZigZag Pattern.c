/*
Functions - Print ZigZag Pattern

Fill in the missing lines of code to print the pattern as defined in the Example Input/Output section.

Input Format:
The first line contains N.

Output Format:
N lines contain the number pattern.

Boundary Conditions:
1 <= N <= 50

Example Input/Output 1:
Input:
5

Output:
1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25

Example Input/Output 2:
Input:
4

Output:
1 2 3 4
8 7 6 5
9 10 11 12
16 15 14 13
*/

#include<stdio.h>

void printPattern(int N)
{int i,j;
 for(i=1;i<=N;i++)
 {if(i%2==1)
  {for(j=N*(i-1)+1;j<=N*i;j++)
    printf("%d\t",j);
   printf("\n");
  }
  else
  {for(j=N*i;j>N*(i-1);j--)
    printf("%d\t",j);
   printf("\n");
  }
 }
}

void main(){
  int n;
  scanf("%d",&n);
  printPattern(n);
}
