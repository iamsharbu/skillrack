/*
Minimum Spring Hops

A series of springs are represented as an array of size N. Each value in array defines the power of spring to push the object forward. A starting spring value M is passed as input. Find the minimum number of hops needed for the object to reach the last spring. If last spring cannot be reached print -1.

Boundary Condition(s):
2 <= N <= 1000
1 <= M <= 1000

Input Format:
The first line contains the value of N and M separated by space(s).
The second line contains N integers separated by space(s).

Output Format:
The first line contains the minimum number of hops to reach the last spring.

Example Input/Output 1:
Input:
9 3
5 3 2 1 1 3 1 3 4

Output:
1

Explanation:
Starting value 3 occurs thrice. Traversing from 3 at 6th position will be minimal to reach the last spring (3->4).

Example Input/Output 2:
Input:
10 5
5 3 2 1 8 3 7 3 1 6

Output:
3

Explanation:
There is only one starting value 5. The number of hops needed is 3 (5->3->1->6).
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
  int n,x,cnt=0,x1,a[999];
  cin>>n>>x;
  for(int i=0;i<n;i++){
      cin>>a[i];}
  for(int i=0;i<n;i++){
      if(a[i]==x&&i+a[x1]<=n-1){
          x1=i;
      }
  }
  int i=x1,r=0;
  while(i<n){
      cnt++;
      r=i;
      i+=a[i];
    }
  if(i-a[r]!=n-1)
      cnt=0;
  cout<<cnt-1;
}
