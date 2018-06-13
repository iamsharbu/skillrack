/*
Decreasing Odd Even Numbers

An integer N is given as input. If N is even number print the odd numbers from N to 1. If N is odd number print the even numbers from N to 1.

Boundary Condition(s):
1 <= N <= 9999

Input Format:
The first line contains N.

Output Format:
The first line contains the output specified in the Example Input/Output section.

Example Input/Output 1:
Input:
10

Output:
9 7 5 3 1

Example Input/Output 2:
Input:
11

Output:
10 8 6 4 2
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int a;
    cin>>a;
    a--;
    while(1){
        cout<<a<<" ";
        if(a==1||a==2)break;
        a-=2;
    }

}
