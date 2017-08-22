/*
Convert Decimal to Binary (Id-3034)
Given a number N in decimal format, 
the program must print the binary representation of the number N.
Input Format:
    The first line contains N.
 Output Format:
    The first line contains binary representation of N
 Boundary Conditions:
      1 <= N <= 9999999
 Example Input/Output 1:
    Input:5
    Output:101
  Example Input/Output 2:
    Input:18
    Output:10010
*/
#include<stdio.h>

int main(){
    int a,ans;
    scanf("%d",&a);
    while(a>0){
        ans = ans*10+a%2;
        a=a/2;
    }
    printf("%d",ans);
}
