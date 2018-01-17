/*
Pattern - String Alphabets

Given a string S as the input, the program must print the pattern as described in the Example Input/Output section.

Input Format:
The first line contains S.

Output Format:
The pattern as described in the Example Input/Output section.

Boundary Conditions:
2 <= Length of S <= 100

Example Input/Output 1:
Input:
EAGLE

Output:
EAGLE
AGLEE
GLEEA
LEEAG
EEAGL
EAGLE

Example Input/Output 2:
Input:
MORNING

Output:
MORNING
ORNINGM
RNINGMO
NINGMOR
INGMORN
NGMORNI
GMORNIN
MORNING

*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
  char a[1001],b[1001];
  int i=0,j=0,bb=0,r=0;
  scanf("%s",a);
  int l=strlen(a);
  while(r!=l){
      for( i=bb;i<l;i++) printf("%c",a[i]);
      for( j=0;j<bb;j++) printf("%c",a[j]);
      bb++;
      printf("\n");
      r++;
  }
    printf("%s",a);  
}


