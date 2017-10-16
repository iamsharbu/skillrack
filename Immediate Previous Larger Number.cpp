/*

Immediate Previous Larger Number

N numbers are passed as input to the program. The program must print the immediate previous larger number. If there is no such larger number print 0 for that specific number.

Note: As N can be as high as 100000, optimize your algorithm to avoid timeout.

Input Format:
The first line contains N.
The second line contains N numbers separated by a space.

Output Format:
The first line contains N numbers which denote the immediate previous larger number.

Boundary Conditions:
2 <= N <= 100000

Example Input/Output 1:
Input:
11
455 346 76 304 488 374 385 433 350 9 1000

Output:
0 455 346 346 0 488 488 488 433 350 0

*/


#include <iostream>
using namespace std;
int main(int argc, char** argv){
  int s=0,n,j,i,a[99999]={0};
  cin>>n;
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(i=0;i<n;i++){
  for(j=i-1;j>=0;j--){

    if(a[j]>a[i]){
    s=1;
    cout<<a[j]<<" ";
    break;
    }
  }
     if(s==0)
     cout<<"0 "; 
     s=0;
  }
}


