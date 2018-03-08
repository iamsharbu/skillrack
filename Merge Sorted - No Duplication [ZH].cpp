/*
Merge Sorted - No Duplication [ZH]

Given two sorted arrays, merge them in such a way that elements are not repeated.

Input Format:
The first line contains the size of Array1 and Array2 separated by a space.
The second line contains elements of Array 1 separated by a space.
The third line contains elements of Array 2 separated by a space.

Output Format:
The first line contains the merged elements without any duplication, with the elements separated by a space.

Boundary Condition:
1 <= Length of Array1 and Array2 <= 100

Example Input/Output 1:
Input:
7 6
1 3 4 5 8 9 10
1 2 3 5 7 8

Output:
1 2 3 4 5 7 8 9 10
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){
    int n,m,i,j,k,l,s;
    cin>>n>>m;
    int a[n],b[m],c[200000]={0};
    for(i=0;i<n;i++){
        cin>>a[i];
        c[a[i]-1]++;
    }
    for(i=0;i<m;i++){
        cin>>b[i];
        c[b[i]-1]++;
    }
    for(i=0;i<200000;i++)
    if(c[i]>0)
    cout<<i+1<<" ";
  }
