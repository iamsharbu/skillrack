/*
First & Last X Digits

Given a number N, print the first and last X digits of the number.

Input Format:
The first line contains N.
The second line contains X.

Output Format:
The first line contains the first X digits of N.
The second line contains the last X digits of N.

Boundary Condition:
X <= Length of N <= 20

Example Input/Output 1:
Input:
123456

Output:
12
56
*/

#include <iostream>
#include<string>
#include<sstream>
using namespace std;
int main(int argc, char** argv){
    long int m;
    cin>>m;
    stringstream s;
    s<<m;
    string a;
    s>>a;
    long int x,y;
    cin>>x;
    y=x;
    for(int i=0;i<x;i++){
      if(a[i]!='0'){
        cout<<a[i];}
    else{
        if(a[i-1]!='0')
        cout<<a[i];
        else
        x++;
         }
  }
  cout<<" ";
  for(int i=a.length()-y;i<a.length();i++)
    cout<<a[i];
}


