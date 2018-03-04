/*
Equal Left And Right Sum [ZH]

Given an array of integer of size N, print the elements for which the sum of all elements present to it's left is equal to the sum of all elements present to it's right.

Boundary Condition:
1<= N <= 10000

Input Format:
The first line contains N.
The second line contains N integers separated by space.

Output Format:
The first line contains the output as specified.

Sample Input/Output 1:
Input:
3
2 1 5 3 

Output:
5

Sample Input/Output 2:
Input:
6
1 4 -2 2 2 1 

Output:
-2 2
*/


#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char** argv){
    int i,j,k,n,x,y,a[10000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        x=0;y=0;
        for(j=i-1;j>=0;j--)
            x+=a[j];
        for(k=i+1;k<n;k++)
            y+=a[k];
        if(x==y)
            cout<<a[i]<<" ";
    }
}
