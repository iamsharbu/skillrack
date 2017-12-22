/*
File - Odd Numbers Count

The input file name is passed as the input. The input file resides in the same current directory of the program being executed. The input file contains several positive numbers (The numbers may be in same line or different lines and they are separated by one or more spaces). The program must read the file and print the count C of the odd numbers present in the input file.

Input Format:
The first line contains the name of the input file.

Output Format:
The first line contains the count of the odd numbers present in the input file.

Boundary Conditions:
1 <= C <= 99999

Example Input/Output 1:
Input File Content:
90 12 31 45

99 71 86      77
90 89

Output:
6
*/


#include<stdio.h>
#include <stdlib.h>
int main(){
    FILE *f;
    char a[999];
    int n,c=0;
    scanf("%s",a);
    f=fopen(a,"r");
    while(!feof(f)){
        fscanf(f,"%d",&n);
        if(n%2!=0){
            c++;
        }
     }
    printf("%d",c);
  }



