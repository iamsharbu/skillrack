/*
Minimum Distance Between Alphabets

Given a string S and two alphabets C1 and C2 present in S, find the minimum distance D  between C1 and C2 in S.

Input Format:
The first line will contain S.
The second line will contain C1 and C2 separated by a space.

Output Format:
The first line will contain D.

Boundary Conditions:
2 <= Length of S <= 100

Example Input/Output 1:
Input:
spaceship
c s

Output:
1
*/


#include<iostream>
using namespace std;
int main(){
    string s;
    char a,b,n=' ';
    int i,j,k,m,d=1000;
    cin>>s>>a>>b;
    for(i=0;i<s.length();i++)
    {
        if((s[i]==a||s[i]==b)&&s[i]!=n)
        {
            n=s[i];
            for(j=i+1;j<s.length();j++)
            {
                if(s[j]==a||s[j]==b)
                {k=i;m=j;break;}
            }
        }
        if((m-k-1)<d)
        d=m-k-1;
    }
    cout<<d;
}

