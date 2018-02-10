/*
Sum of Unit and Most Significant Digits

Given a positive integer N, print the sum of most significant digit and least significant digit (unit digit) of N.

Input Format :
The first line contains N.

Output Format :
The first line contains the the sum of most significant digit and least significant digit of N.

Boundary Conditions:
1 <= N <= 9999999

Example Input/Output 1 :
Input :
5912

Output :
7

Example Input/Output 2:
Input :
29

Output :
11
*/


#include <iostream>
using namespace std;
int main(int argc, char** argv){
    string a;
    cin>>a;
    cout<<a[0]-'0'+a[a.length()-1]-'0';
}


