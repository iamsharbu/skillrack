/*
Count of common characters in two strings

Two string values S1 and S2 are passed as input. The program must print the count of common characters in the strings S1 and S2. Assume the alphabets in S1 and S2 will be in lower case.

Input Format:
First line will contain the value of string S1
Second line will contain the value of string S2

Output Format:
First line will contain the count of common alphabets.

Boundary Conditions:
Length of S1 and S2 will be from 3 to 100.

Sample Input/Output:

Example 1:
Input:
china
india

Output:
3

Explanation:
The common characters are i,n,a


Example 2:
Input:
energy
every

Output:
3

Explanation:
The common characters are e,r,y
*/


#include <iostream>
using namespace std;
int main(int argc, char** argv){
            string s,k;
            int i,j,l,m=0,a[26]={0},b[26]={0};
            cin>>s>>k;
            for(i=0;i<s.length();i++)
              a[s[i]-'a']++;
            for(i=0;i<k.length();i++)
              b[k[i]-'a']++;
            for(i=0;i<26;i++)
              if(a[i]>0&&b[i]>0)
                m++;
            cout<<m;
         }
