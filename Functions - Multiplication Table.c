/*
Functions - Multiplication Table

Fill in the missing lines of code to define the method printMultiplicationTable to print the multiplication table for N upto M multiples.

Input Format:
The first line contains M and N separated by a space.

Output Format:
M lines contain the multiplication table for N.

Boundary Conditions:
1 <= N <= 100
2 <= M <= 100

Example Input/Output 1:
Input:
5 10

Output:
1*5=5
2*5=10
3*5=15
4*5=20
5*5=25
6*5=30
7*5=35
8*5=40
9*5=45
10*5=50

Example Input/Output 2:
Input:
11 8

Output:
1*11=11
2*11=22
3*11=33
4*11=44
5*11=55
6*11=66
7*11=77
8*11=88
*/

#include<stdio.h>
void printMultiplicationTable(int N,int M){
    int i=0;
    for(i=1;i<=M;i++){
        printf("%d*%d=%d\n",i,N,N*i);
        
    }
}
int main()
{
    int N, M;
    scanf("%d%d",&N,&M);
    printMultiplicationTable(N,M);
}
