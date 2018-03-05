/*
Smallest Possible Integer

Given an integer N, print the smallest possible integer that can be formed using all the digits of N.

Boundary Condition:
1<= N <= 9999999999

Input Format:
The first line contains N.

Output Format:
The first line contains the smallest possible integer that can be formed using all the digits of N.

Sample Input/Output 1:
Input:
45223

Output:
22345

Sample Input/Output 2:
Input:
48903012

Output:
10023489
*/


#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
  int i;
  char a[10000],b;
  cin>>a;
  sort(a,a+strlen(a));
  for(i=0;i<strlen(a);i++){
      if(a[i]!='0'){
          break;
      }
  }
  b=a[0];
  a[0]=a[i];
  a[i]=b;
  cout<<a;

}
