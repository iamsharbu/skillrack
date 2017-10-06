/*
Perfect Number

Given a positive integer N as the input, the program must print yes if N is a perfect number. Else no must be printed.

Input Format:
The first line contains N.

Output Format:
The first line contains yes or no

Boundary Conditions:
1 <= N <= 999999

Example Input/Output 1:
Input:
6

Output:
yes

Example Input/Output 2:
Input:
8

Output:
no

*/


#include <iostream>
using namespace std;
int main(){
 int n,s=0;
 cin>>n;
 for(int i=1;i<=n-1;i++){
     if(n%i==0)
       s+=i;
       
 }
 if(s==n){
  cout<<"yes";
  }
 else cout<<"no";
}


