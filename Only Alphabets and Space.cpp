/*
Program ID- 3135 Solved By 397 Users 

Author: SkillRack 
Only Alphabets and Space

Given a String S, remove all the special characters and numbers from S and print.

Input Format:
The first line contains the string S

Output Format:
The first line contains the string with only alphabets and spaces.

Boundary Conditions:
1 < Length of S < 1000

Example Input/Output 1:
Input:
Hello #$ World!

Output:
Hello  World

Example Input/Output 2:
Input:
Grand2017

Output:
Grand
*/

#include<iostream>
using namespace std;
int main()
{
string s;
getline(cin,s);
int i;
for(i=0;i<s.length();i++)
{
    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]
        ==32)
    cout<<s[i];
}
}


Code did not pass the execution
Input:
Hello #$ World!
Expected Output:
Hello  World
Your Program Output:
Hello
