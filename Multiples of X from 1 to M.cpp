/*
Multiples of X from 1 to M.

Accept two numbers M and X, print the multiples of X from 1 to M.

Input Format:
The first line contains M and X separated by a space.

Output Format:
The first line contains the multiples of X from 1 to M separated by a space.

Example Input/Output 1:
Input:
10 2

Output:
2 4 6 8 10

Example Input/Output 2:
Input:
20 5
 
Output:
5 10 15 20

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
    int a,b,i;
    cin>>a>>b;
    for(int i=b;i<=a;i+=b){
        cout<<i<<" ";
    }
}


