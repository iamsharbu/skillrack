/*
Print N Characters

Accept a character C and a positive integer N as input. The program must print N characters starting from C.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains C and N separated by space(s).

Output Format:
The first line contains N characters.

Example Input/Output 1:
Input:
a 4

Output:
abcd

Example Input/Output 2:
Input:
z 5

Output:
zabcd
*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    string a("ABCDEFGHIJKLMNOPQRSTUVWXYZ"),
           bb("abcdefghijklmnopqrstuvwxyz");
    char b;
    cin>>b;
    int i,x;
    (!islower(b))? i=a.find(b) : i=bb.find(b);
    cin>>x;
    for(int j=i;x--;j++){
        if(j==26)
            j=0;
        if(!islower(b))
           cout<<a[j]; 
        else
          cout<<bb[j];
    }
}
