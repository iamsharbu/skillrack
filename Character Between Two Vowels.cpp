/*
Character Between Two Vowels

Given a string S, Print only the characters which are surrounded by vowels on both sides, if no character matches the condition print -1.

Input Format:
The first line contains the value of string S.

Output Format:
The first line contains the characters which are surrounded by vowels on both sides if not print -1.

Boundary Condition:
3 <= length of the S <= 100

Example Input/Output 1:
Input:
acceleration

Output:
lrt

Example Input/Output 2:
Input:
knowledge

Output:
-1
*/

#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
bool isvov (char c) {     
  char vowel[] = {'a', 'e', 'i', 'o', 'u'};    
    char* end = vowel + sizeof(vowel) / sizeof(vowel[0]);  
    char* position = std::find(vowel, end, c);  
  return (position != end);  
}
int main(int argc, char** argv){
    int n=0;
    string a;
    cin>>a;
    for(int i=1;i<a.length()-1;i++){
        if(isvov(a[i-1])&&isvov(a[i+1])){
            cout<<a[i];
            n++;
        }
    }
    if(n==0)
       cout<<"-1";
}
