/*
Note: not done by me
Find Palindrome By Rotation

Given a string S, print the minimum number of rotations needed to obtain a palindrome. If no palindrome can be formed by rotating S, print -1.

Note: The string S must be rotated only from left to right (anti clock wise) direction.

Boundary Condition(s):
1 <= Length of S <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the count of rotations if palindrome can be formed else print -1.

Example Input/Output 1:
Input:
ammad

Output:
2

Example Input/Output 2:
Input:
hello

Output:
-1

*/
#include <iostream>
 
using namespace std;
int chkpal(string x){
    int n=x.length(),i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        if(x[i]!=x[j])return 0;
    }
    return 1;
}

int main(int argc, char** argv)
{
    int i,j,k,n,c=0;
    string a;
    cin>>a;
    n=a.length();
    //cout<<a;
    for(i=0;i<n;i++){
        string y="";
        for(j=i;j<n;j++)y=y+a[j];
        for(j=0;j<i;j++)y=y+a[j];
        k=chkpal(y);
        if(k==1){cout<<i; return 0;}
    }
    cout<<"-1";


}
