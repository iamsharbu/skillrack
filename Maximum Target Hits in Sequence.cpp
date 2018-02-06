/*
Maximum Target Hits in Sequence

In a shooting competition, whenever the target is hit, the score is increased by 1. When the target is missed the score is decreased by 1. Given N, the number of aims at the target and the score obtained at each of these N shots, print the longest number of successful hits in sequence. The score never falls below 0.

Boundary Condition:
1<= N <= 999999

Input Format:
First line contains N
second line contains N scores obtained, each separated by a space.

Output Format:
First line contains the count of maximum successful hits in sequence.

Example Input/Output 1:
Input:
20
0 1 0 0 1 2 1 2 3 4 3 2 3 4 5 6 7 8 7 6

Output:
6
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n,a[100000],cnt=0,k=0,l=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0)
          continue;
        else{
          if(a[i-1]<a[i]) 
            k++;
          else{
              if(cnt<k)
                  cnt=k;
                  k=0;
                  l=1;
              }
        }
    }
    if(l==0)
      cnt=k;
    cout<<cnt;
}


