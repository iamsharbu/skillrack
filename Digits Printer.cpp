/*
Digits Printer

Given a number N. print all the digits of the number N in descending order.

Boundary Condition:
0 <= N <= 99999999999999

Input Format:
The first line contains the value of N.

Output Format:
The first line contains all the digits of the number N printed in descending order.

Example Input/ Output 1:
Input:
12447511

Output:
75442111

Example Input/ Output 2:
Input:
019454401

Output:
95444110


*/

#include <bits/stdc++.h>
 
using namespace std;
bool m(char a,char b){
    return a>b;
    }
int main(int argc, char** argv){
  char a[1000];
  cin>>a;
  if(a[0]=='0'){
    sort(a+1,a+strlen(a),m);
    for(int i=1;i<strlen(a);i++)
          cout<<a[i];
   }
  else{
    sort(a,a+strlen(a),m);
    cout<<a;
  }
}
