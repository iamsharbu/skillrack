/*
Position Digits Sum

The program must accept two positive integers as the input and then print the sum of their unit digits, tenth digits and so on.

Input Format:
The first line will contain A and B separated by a space.

Output Format:
The first line will contain the sum of unit digits, tenth digits and so on with the values separated by a space.

Boundary Conditions:
1 <= A,B <= 9999999

Example Input/Output 1:
Input:
23 49

Output:
12 6

Example Input/Output 2:
Input:
12456 687

Output:
13 13 10 2 1
*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv)
{
int a,b,k,n;
cin>>a>>b;
//k=a;n=b;
while(a>0||b>0)
{
    cout<<(a%10)+(b%10)<<" ";
    a=a/10;b=b/10;
}
}

