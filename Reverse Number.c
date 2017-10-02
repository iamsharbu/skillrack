Reverse Number

The program must accept a number N and prints the reverse of the number N.

Example Input/Output 1:
Input:
12345

Output:
54321

Example Input/Output 2:
Input:
10900

Output:
901


Note : the language specified is :. TCS
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int args,char* argv[]){
  int i=0,j=0;
  char m[999];
    for(i=strlen(argv[1])-1;i>=0;i--)
      m[j++]=argv[1][i];
  printf("%d",atoi(m));

}
