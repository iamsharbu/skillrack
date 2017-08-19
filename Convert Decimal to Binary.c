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
    #include <stdlib.h>
    int main()
    {
      int r,l=0,a,z[1000];
      scanf("%d",&a);
      while(a>0)
      {
        z[l]=a%2;
        a=a/2; 
        l++;
      }
      int m=0;
      for(m=l-1;m>=0;m--)
        printf("%d",z[m]);
     }
