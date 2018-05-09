/*
Mirror Pattern Matrix

An integer N is passed as input. The program must print the pattern as given in the Example Input/Output section.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.

Output Format:
The first N lines contain the specified output.

Example Input/Output 1:
Input:
3

Output:
1 2 3 2 1
4 5 6 5 4
7 8 9 8 7

Example Input/Output 2:
Input:
4

Output:
1 2 3 4 3 2 1
5 6 7 8 7 6 5
9 10 11 12 11 10 9
13 14 15 16 15 14 13
*/


#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int x,r,l=1;
    cin>>x;
    for(int i=1;i<=x;i++){
        r=x;
        while(r--){
            cout<<(l++)<<" ";
        }
        for(int j=l-2;j>=(l-x);j--){
            cout<<j<<" ";
        }
        cout<<"\n";
     }
}

