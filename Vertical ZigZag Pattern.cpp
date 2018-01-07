/*
Vertical ZigZag Pattern

Fill in the missing lines of code to print the pattern as defined in the Example Input/Output section.

Input Format:
The first line contains N.

Output Format:
N lines contain the number pattern.

Boundary Conditions:
1 <= N <= 50

Example Input/Output 1:
Input:
5

Output:
1
2 9  
3 8 10
4 7 11 14
5 6 12 13 15

Example Input/Output 2:
Input:
4

Output:
1
2 7
3 6 8
4 5 9 10
*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
int n,a[999][999]={0},x=1,t=0,m=0;
cin>>n;
for(int i=1;i<=n;i++){
  if(i%2!=0){
     for(int j=1;j<=n;j++)
        if(t<j){
        a[j][i]=x++;
        }
      
  }
    else{m=x+n-t-1;
      for(int j=1;j<=n;j++) 
      if(t<j){
         
          a[j][i]=m--;
      }
      x=x+n-t;
    }
    t++;
}
for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    if(a[i][j]!=0){
      cout<<a[i][j]<<" ";
      }
  }cout<<endl;
 }
    
}


