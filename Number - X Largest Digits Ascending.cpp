/*
Number - X Largest Digits Ascending

Accept a number N and print the first X largest digits in N in ascending order.

Input Format:
The first line contains N and X separated by a space.

Output Format:
The first line contains the X largest digits in N in ascending order.

Boundary Conditions:
1 <= N <= 999999999999999
1 <= X <= 10

Example Input/Output 1:
Input:
1684285215
3

Output:
568

Example Input/Output 2:
Input:
90217623
2

Output:
79
*/

#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){
    string s;
    cin>>s;
    int i,j,k,l,m,n;cin>>n;
    vector<char>a;
    for(i=0;i<s.length();i++)
      a.push_back(s[i]);
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    k=a.size();
    for(i=k-n;i<k;i++)
      cout<<a[i];
}
