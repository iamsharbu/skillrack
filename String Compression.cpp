/*
String Compression

Given a string S, compress the string by its character and its count as specified in the sample input and output.

Boundary Condition:
1<= Length of S <= 10000

Input Format:
The first line contains the string S.

Output Format:
The first line contains the compressed string format.

Sample Input/Output 1:
Input:
aaabbbbcc 

Output:
a3b4c2

Sample Input/Output 2:
Input:
abc

Output:
a1b1c1
*/


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    int i,j=0;
    string a;
    cin>>a;
    for(i=0;i<a.length();i++){
    
        j++;
        if(a[i]!=a[i+1]){
        cout<<a[i]<<j;
            j=0;
        }
    }
 }
