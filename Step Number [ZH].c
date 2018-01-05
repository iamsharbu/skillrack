/*
Step Number [ZH]

Given a number N, the program must print if N is a step number or not. (A step number is a number which has a digit which is either 1 more or 1 less than the previous digit).

Input Format:
The first line contains N.

Output Format:
The first line contains yes or no

Boundary Conditions:
10 <= N <= 99999999

Example Input/Output 1:
Input:
1212343

Output:
yes

Example Input/Output 2:
Input:
342345

Output:
no

Explanation:
The difference between 2 and 4 is NOT 1.
*/
#include<stdio.h>
#include<string.h>
void main()
{char N[10];
 int i,curr,pre,next,n,ch=0;
 scanf("%s",N);
 n=strlen(N);
 for(i=1;i<n-1;i++)
 {curr=N[i]-'0';
  pre=N[i-1]-'0';
  next=N[i+1]-'0';
  if(((curr-pre==1)||(curr-pre==-1))&&((next-curr==1)||(next-curr==-1)))
   ch++;
 }
 if(ch==n-2)
  printf("yes");
 else
  printf("no");
}
