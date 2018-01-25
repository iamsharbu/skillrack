/*
Fisherman's Mantra

A fisherman usually gets F number of fish from the sea. The fisherman requested a sage to yield more fishes from the sea. So he got a special boon from the sage. The sage allowed him to chant a mantra for N times. For each time he chants the mantra, the number of fish captured doubles. Given the number of first day fish F and number of times N he chants the mantra, find the final increased count of fish he gets from the sea.

Input Format: 
The first line contains the value of fishes F and number of chants N separated by a space.

Output Format:
The first line contains the value of final number of fish T

Example Input/Output 1:
Input:
5 2

Output:
20

Example Input/Output 2:
Input:
6 1

Output:
12
*/

#include<stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<b;i++){
      a+=a;
      }
    printf("%d",a);
 }


