/*
Print Next Even Digit

Given a number N, the program must print the next even digit for each of the digits in N,

Boundary Condition(s):
1 <= N <= 999999999

Input Format:
The first line contains N.

Output Format:
The first line contains the specified output.

Example Input/Output 1:
Input:
123

Output:
244

Example Input/Output 2:
Input:
789

Output:
800
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
  string a;
  cin>>a;
 
 for(int i=0;i<a.length();i++){
     if((a[i]-'0')%2==0){
         if(((a[i]-'0')+2)==10){
             cout<<'0';
         }
         else{
             cout<<(a[i]-'0')+2;
         }
         
     } 
     else{
         if(((a[i]-'0')+2)==11)
          cout<<"0";
         else
          cout<<(a[i]-'0')+1;
     }
  }
}
