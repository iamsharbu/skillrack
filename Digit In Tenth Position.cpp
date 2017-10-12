/*
Digit In Tenth Position

The program must accept a positive integer N and print the digit in the tenth position.

Input Format:
The first line denotes the value of N.

Output Format:
The first line contains the value of N.

Boundary Conditions:
10 <= N <= 9999999

Example Input/Output 1:
Input:
20

Output:
2

Example Input/Output 2:
Input:
37843

Output:
4


*/


#include <iostream>
#include <string>
using namespace std;
int main(){
 string s;
 cin>>s;
 cout<<s[s.length()-2];
}

