/*
Second Largest Value

The program must accept a set of N integer values as command line arguments and print the second largest value. If there is no second largest value, print -1 as the output.

Example Input/Output 1:
Input:
20 30 30 20 30 15 12 11 10 6

Output:
20

Example Input/Output 2:
Input:
19 19 19 19 19 19

Output:
-1


TCS
*/


#include<stdio.h>
#include<stdlib.h>
int main(int args,char* argv[]){
    int a[1000],i,m=-99999,j;
    for(i=1;i<args;i++){
        a[i]=atol(argv[1]);
        if(a[i]>m)
        m=a[i];
    }
    for(j=1;j<i;j++){
        if(a[j]==m)
        a[j]=-99999;
    }
    m=-99999;
    for(j=1;j<i;j++){
        if(a[j]>m)
        m=a[j];
    }
    printf("%d",m);
}



