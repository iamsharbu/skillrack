/*
Username Domain Extension

Given a string S which is of the format USERNAME@DOMAIN.EXTENSION, the program must print the EXTENSION, DOMAIN, USERNAME in the reverse order.

Input Format:
The first line contains S.

Output Format:
The first line contains EXTENSION.
The second line contains DOMAIN.
The third line contains USERNAME.

Boundary Condition:
1 <= Length of S <= 100

Example Input/Output 1:
Input:
abcd@gmail.com

Output:
com
gmail
abcd

*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){
    string a,b,j,m;
    cin>>a;
    istringstream is(a);
    getline(is,b,'@');
    getline(is,j,'.');
    is>>m;
    cout<<m<<"\n"<<j<<"\n"<<b;
}

