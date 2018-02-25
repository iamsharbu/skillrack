/*
Array LEADERS (ZH)

An array of N numbers is passed as input. The program must print all the LEADERS in the array. A number is a LEADER if it is greater than all the numbers to it's right.

Note: The rightmost number is always a leader.

Input Format:
The first line contains N numbers, each separated by a space.

Output Format:
The first line contains the LEADERS, each separated by a space.

Boundary Conditions:
1 <= N <= 9999

Example Input/Output 1:
Input:
10 17 4 3 5 2

Output:
17 5 2
*/
#include <iostream>
 
using namespace std;

int main(int argc, char** argv){
  int a[9999],i,j,k,l,m,n=0;
  while(cin>>k){
           a[n]=k;
           n++;
          }
 for(i=0;i<n-1;i++){
         l=0;
         for(j=i+1;j<n;j++){
            if(a[i]>a[j])
              l=1;
            else 
              break;
     }
     if(l==1&&j==n)
        cout<<a[i]<<" ";
   }
  cout<<a[n-1];
}
