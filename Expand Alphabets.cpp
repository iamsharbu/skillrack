/*
Expand Alphabets

Given a string S with alphabets and their count, repeat the alphabets based on their count and print the value as the output.

Input Format:
The first line contains S.

Output Format:
The first line contains the alphabets repeated based on their count.

Boundary Condition:
1 <= Length of S <= 100

Example Input/Output 1:
Input:
a2c5z4

Output:
aaccccczzzz
*/


#include <iostream>
#include<sstream>
using namespace std;
int main(int argc, char** argv){
    stringstream x;
    string a;
    cin>>a;
    x<<a;
    char m;
    int i=0,l=0;
    while(x>>m&&x>>l){
      while(l--){
          cout<<m;
        }
     }
  }
