/*
Count Characters in Odd Positions

A string S and a character C are passed as input. The program must print the count of the character C present in odd positions in the string.

Boundary Condition(s):
2 <= Length of String <= 1000

Input Format:
The first line contains the string S and the character C separated by space(s).

Output Format:
The first line contains an integer.

Example Input/Output 1:
Input:
ticketcounter t

Output:
2

Example Input/Output 2:
Input:
ingredient e

Output:
1
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv){
    string a;
    char x;
    cin>>a>>x;
    int r=0,k;
    if(a[0]==x)
        r++;
    for(int i=1;i<a.length();i++){
        k=i+1;
        if(k%2!=0&&a[i]==x)
            r++;
     }
cout<<r;
}
