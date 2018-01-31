/*
FLAMES Game

FLAMES game is a relationship calculating game. Letters in FLAMES stand for,
F - FRIENDS
L - LOVER
A - AFFECTION
M - MARRIAGE
E - ENEMY
S - SIBLING

Calculation Logic - FLAMES:
1. Get two names S1 and S2.
2. Remove the common characters in both the names.
3. Find the count of the characters that are left, the count is called FLAMES count FC.
4. Consider FLAMES letters ('F', 'L', 'A', 'M', 'E', 'S') and start removing the letters in a circular manner using the FC.
5. The letter which is finally left desides the output, If it's
F - FRIENDS
L - LOVER
A - AFFECTION
M - MARRIAGE
E - ENEMY
S - SIBLING

Input Format:
First line contains S1
Second line contains S2

Output Format:
First line contains FLAMES relationship in uppercase.

Boundary Conditions:
2 <= S1, S2 <= 100

Example Input/Output 1:
Input:
raja
rani

Output:
ENEMY

Example Input/Output 2:
Input:
waffles
bright

Output:
AFFECTION
*/

#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv)
{
   string a,b,s="FLAMES";
   cin>>a>>b;
   int i,j,l,m,n=0,o,p,c,k=6;
   p=a.length()+b.length();
   for(i=0;i<a.length();i++){
       c=0;
       for(j=0;j<b.length();j++){
           if(a[i]>='A'&&a[i]<='Z')
                a[i]+=32;
            if(b[j]>='A'&&b[j]<='Z')
                b[j]+=32;
            if(a[i]==b[j]&&b[j]!='0'){
                b[j]='0';
                n++;
                c=1;
                break;
            }
        }
        if(c==1){
            a[i]='0';
            n++;
        }
   }
    n=p-n;
    i=0;
    while(k>1){
        o=0;
        for(c=0;c<n;c++){
            if(c==n-1){
                s.erase(s.begin()+i);
                k--;
                o=1;
            }
            if(o==0)
                i++;
            if(i>=s.length())
                    i=0;
        }
    }
    switch(s[0]){
        case 'F':cout<<"FRIENDS";break;
        case 'L':cout<<"LOVER";break;
        case 'A':cout<<"AFFECTION";break;
        case 'M':cout<<"MARRIAGE";break;
        case 'E':cout<<"ENEMY";break;
        case 'S':cout<<"SIBLING";break;
        
    }
}


