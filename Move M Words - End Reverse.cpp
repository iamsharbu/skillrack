/*
Move M Words - End Reverse

The program must accept a string S which contains N words and move the first M words to the last in the reverse order.

Input format:
The first line contains S.

Boundary Conditions:
M <= N < 50
10 <= Length of S <= 200

Example Input/Output 1:
Input:
one two three four five
3

Output:
four five three two one

*/

#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv){
    string a[500];int n,i=0;
    while(cin>>a[i]){
        i++;
        }
    i--;
    stringstream ss;
    ss<<(a[i]);
    ss>>n;
      for(int x=n;x<i;x++)
        cout<<a[x]<<" ";
      for(int x=n-1;x>=0;x--)
        cout<<a[x]<<" ";
}



