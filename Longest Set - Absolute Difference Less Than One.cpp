/*
Longest Set - Absolute Difference Less Than One (Id-2713)
An array of N integers is passed as input. 
The program must print the length of the longest set of integers among 
the N numbers so that the absolute difference between any two integers in the set 
does not exceed 1. 

Input Format: 

The first line will contain the value of N which represents the count of integers 
to be passed as input. The second line will contain N integer value separated by 
a space. Output Format: The first line will contain the integer value denoting 
the longest set of integers meeting the given criteria.

Constraints: 
  3 <= N <= 10000 

Example Input/Output 1: 
Input: 
9
1 3 2 1 4 2 1 5 3 
Output: 
5 
Explanation: 
  The longest set meeting the condition is {1,2,1,2,1} 
 
Example Input/Output 2: 
Input: 
6 
1 2 3 4 5 3 
Output: 
3 
Explanation: 
  The longest set meeting the condition is {3,4,3}
*/
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){
    int n,i,j,k,a[100000],b[100000],c;
    cin>>n;
    for(i=0;i<n;i++)
      cin>>a[i];

    for(i=0;i<n;i++){
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]=-1;
            }
        }
        if(a[i]==-1)b[i]=0;
        else b[i]=c;
    }
    //for(i=0;i<n;i++)cout<<b[i]<<" ";
    sort(b,b+n);
    cout<<b[n-1]+b[n-2];
}
