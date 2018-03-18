/*
Arithmetic Progression - Nth Term

The first three terms in an arithmetic progression are passed as input. A positive integer value N (where N > 3) is also passed as the input. The program must print Nth term in the arithmetic progression.

Input Format:
The first line will contain the first three terms separated by a space.
The second line will contain N.

Output Format:
The integer value denoting the Nth term.

Example Input/Output 1:
Input:
5 10 15
6

Output:
30

Explanation:
The progression is 5 10 15 20 25 30 35 and so on.
The 6th term is 30.

Example Input/Output 2:
Input:
1 4 7
5

Output:
13


C++

*/


#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int a,b,c,n,i;
    cin>>a>>b>>c>>n;
    c=b-a;
    for(i=1;i<n;i++)
    a+=c;
    cout<<a;
}
