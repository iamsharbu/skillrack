/*
Print Mirror Image Series

An integer N is passed as input. The program must print the integers from N to 1 and it's mirror image.

Boundary Condition(s):
1 <= N <= 99

Input Format:
The first line contains the value of N.

Output Format:
The first line contains the mirror image.

Example Input/Output 1:
Input:
6

Output:
6 5 4 3 2 1 2 3 4 5 6

Example Input/Output 2:
Input:
3

Output:
3 2 1 2 3
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
        int i,a;
        cin>>a;
    for( i=a;i>0;i--){
            cout<<i<<" ";
        }
    for(i=2;i<=a;i++){
            cout<<i<<" ";
        }
}
