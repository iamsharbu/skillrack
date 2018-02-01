/*
Print From Y to X

Given the starting and ending values X and Y, print the numbers from Y to X.

Input Format:
The first line contains two values X and Y separated by a space

Output Format:
The first line contains the numbers from Y to X in the reverse order separated by a space.

Example Input/Output 1:
Input:
1 10

Output:
10 9 8 7 6 5 4 3 2 1

Example Input/Output 2:
Input:
20 27

Output:
27 26 25 24 23 22 21 20
 
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int a,b;cin>>a>>b;
    for(int i=b;i>=a;i--)
        cout<<i<<" ";
}


