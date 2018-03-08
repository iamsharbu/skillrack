/*
Consecutive Vowels Count (Id-2941) Author: SKILLRACK 

Given a string S1, print the count C which represents the number of times a vowel is followed by another vowel in the string S1.

Input Format:
The first line contains S1

Output Format:
The first line contains C.

Boundary Conditions:
1 <= Length of S1 <= 1000

Example Input/Output 1:
Input:
lion

Output:
1

Example Input/Output 2:
Input:
arealiouas

Output:
4

Explanation:
ea, io, ou, ua are the 4 occurrences.
*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
  string a;
  cin>>a;
  transform(a.begin(),a.end(),a.begin(),::tolower);
  int x=0;
  for(int i=0;i<a.length();i++){
    if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')){
        x++;  
      }
  }
  cout<<x;
}
