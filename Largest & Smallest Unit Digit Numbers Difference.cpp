/*
Largest & Smallest Unit Digit Numbers Difference

Given N numbers, the program must find and print the difference between numbers having the largest and smallest unit digits.
- If multiple numbers have the largest unit digit, then choose the largest number among them.
- If multiple numbers have the smallest unit digit, then choose the smallest number among them.

Input Format:
The first line contains N.
The second line contains N positive integers separated by a space.

Output Format:
The first line contains the difference between the numbers having the largest and smallest unit digits.

Boundary Conditions:
1 <= N <= 9999

Example Input/Output 1:
Input:
5
19 21 32 41 89

Output:
68

Explanation:
Two numbers 19 and 89 have the largest unit digit 9. We choose 89 as per the condition given.
Two numbers, 21 and 41 have the smallest unit digit 1. We choose 21 as per the condition given.
Hence the difference is 89-21 = 68

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
    int n,m,i,k,a[100000],c[10],b[10]={0};
    cin>>n;
    for(i=0;i<10;i++)c[i]=99999;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++){
        k=a[i]%10;
        if(a[i]>b[k])
          b[k]=a[i];
        if(a[i]<c[k])
          c[k]=a[i];
    }
    for(i=0;i<10;i++)
    {
        if(c[i]!=99999){
            m=c[i];
            break;
        }
    }

        for(i=9;i>=0;i--){
            if(b[i]!=0){
                k=b[i];
                break;
            }
        }
    cout<<k-m;
}
