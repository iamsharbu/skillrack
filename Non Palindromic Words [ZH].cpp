/*
Non Palindromic Words [ZH]

A string with one or more words is passed as the input. The program must print only the words which are not palindromes. Print -1 if all the words in the string are palindromes.

Boundary Condition(s):
1 <= N, Length of S <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the words which are not palindromes separated by a space.

Example Input/Output 1:
Input:
Today madam came to the class

Output:
Today came to the class

Example Input/Output 2:
Input:
malayalam ere

Output:
-1
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
string a;
int cnt=0;
while(cin>>a){
string z(a);
reverse(z.begin(),z.end());
if(a!=z){
    cout<<a<<" ";
    cnt++;
}
    
}
if(cnt==0){cout<<"-1";}

}
