/*
Outer to Inner Swap - Both Odd\Even [EASY]

Given N numbers, the program must swap the first and last element, swap 2nd and last but one element and so on if both the elements are odd or even. If N is odd, the swap will not occur for the middle element.

Input Format:
The first line contains N.
The second line contains N numbers separated by space.

Output Format:
The first line contains N numbers swapped as per the given condition.

Boundary Conditions:
2 <= N <= 9999
Value of a given number is from 1 to 99999

Example Input/Output 1:
Input:
7
4 11 17 6 11 18 2

Output:
2 11 11 6 17 18 4

Explanation:
Take 4 and 2. Swap occurs as both are even.
Now 11 and 18, no swap as 11 is odd and 18 is even.
Now consider the pair 17 and 11. Swap occurs as both are odd.
6 is middle element (as N is odd) and hence retained as it is.
*/

#include<stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){int t=*a; *a=*b; *b
    =t;}
int ooe(int a){return (a%2==0)?1:0;}
int main(){
int a[1000],n;
scanf("%d",&n);
int i,j;
for(i=0;i<n;i++)scanf("%d",&a[i]);
//printf("%d",ooe(2));
for(i=0,j=n-1;i<n/2;i++,j--){
    //printf("%d %d\n",i,j);
    if(ooe(a[i])==ooe(a[j])){
        swap(&a[i],&a[j]);
        //printf("hai");
    }
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}


