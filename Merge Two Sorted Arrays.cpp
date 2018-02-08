/*
Merge Two Sorted Arrays

Given two sorted arrays A1 and A2 with size S1 and S2 respectively, merge the two array elements in sorted order and print the sorted elements as the output.

Input Format:
The first line contains S1 and S2 separated by space.
The second line contains elements of A1 separated by a space.
The third line contains elements of A2 separated by a space.

Output Format:
The first line contains S1+S2 elements in sorted order

Boundary Conditions:
1 <= S1, S2 <= 1000

Example Input/Output 1:
Input:
3 4
1 5 7
2 3 4 5

Output:
1 2 3 4 5 5 7

Example Input/Output 2:
Input:
4 4
6 7 9 12
3 8 15 18
 
Output:
3 6 7 8 9 12 15 18
*/


#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
  int m,n,i;
  cin>>m>>n;
  int a[m+n];
  for(int i=0;i<m;i++)
    cin>>a[i];
  for(int i=m;i<n+m;i++)
    cin>>a[i];
  sort(a,a+(m+n));
  for(int i=0;i<m+n;i++)
    cout<<a[i]<<" ";
}


