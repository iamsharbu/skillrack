/*
Arrange Alphabets - Descending Order

A string S (with only LOWER case alphabets and length from 3 to 100) will be passed as input. The program should print the alphabets in the string in descending order.

Input Format:
The first line will contain S.

Output Format:
The first line will contain the alphabets present in S in descending order.

Example Input/Output 1:
Input:
cake

Output:
keca

Example Input/Output 2:
Input:
innovation

Output:
vtonia
*/

#include <bits/stdc++.h>
using namespace std;
bool x(char a,char b){return b<a;}
int main(int argc, char** argv){
    string a;
    cin>>a;
    sort(a.begin(),a.end(),x);
    a.erase(unique(a.begin(),a.end()),a.end());
    cout<<a;
   }
