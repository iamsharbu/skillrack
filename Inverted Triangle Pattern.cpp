/*
note : not solved by me
Inverted Triangle Pattern

Given an integer N, the program must print the pattern as shown in the Example Input/Output section.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.

Output Format:
The pattern is printed as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
4

Output:
1*2*3*4
*7*6*5*
**8*9**
***10***

Example Input/Output 2:
Input:
5

Output:
1*2*3*4*5
*9*8*7*6*
**10*11*12**
***14*13***
****15****
*/


#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
   int i,j,k=1,f=0,n,N;
   cin>>n;
   N=2*n-1;
   for(i=0;i<n;i++)
   {
       for(j=0;j<i;j++)
           cout<<"*";
       if(i%2!=0)
       {
           f=1;
           k+=(n-i)-1;
       }
       else if(f==1)
       {
           f=0;
           k+=(n-i)+2;
       }
       for(j=j;j<N-i;j++)
       {
           cout<<k;
           if(j!=N-i-1)
               cout<<"*";
           (f==1)?k--:k++;
           j++;
       }
       for(j=j-1;j<N;j++)
           cout<<"*";
       cout<<endl;
   }
}
