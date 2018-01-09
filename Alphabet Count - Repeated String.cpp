/*
Alphabet Count - Repeated String

A string S is passed as input to the program. The string S is repeated till the repeated string R is of length N. The program must print the count of a specific alphabet A which is passed as the input in the repeated string R.

Input Format:
The first line contains S.
The second line contains N.
The third line contains A.

Output Format:
The first line contains the count of the alphabet A in the repeated string R.

Boundary Conditions:
1 <= Length of S <= 50
1 <= N <= 9999999
A is from a to z

Example Input/Output 1:
Input:
abcd
10
b

Output:
3

Explanation:
abcd when repeated till length 10 is abcdabcdab in which the alphabet b occurs 3 times.

*/


#include <iostream>
 
using namespace std;
int main(int argc, char** argv)
{
string a,b;int x,m=0,t=0;char z;
cin>>a>>x>>z;
for(int i=0;i<x;i++){
    b+=a;
}
for(int i=0;i<x;i++)
if(b[i]==z)m++;
cout<<m;
 
}


