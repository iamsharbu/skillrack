/*
Program ID- 3068 Solved By 978 Users 
Pattern Printing - 005

Given an integer N as the input, the program must print 2N lines pattern output as described in the Example Input/Output given below.

Input Format:
The first line contains N.

Output Format:
2N lines of the pattern.

Boundary Conditions:
2 <= N <= 100

Example Input/Output 1:
Input:
4

Output:
1
22
333
4444
4444
333
22
1

Example Input/Output 2:
Input:
10

Output:
1
22
333
4444
55555
666666
7777777
88888888
999999999
10101010101010101010
10101010101010101010
999999999
88888888
7777777
666666
55555
4444
333
22
1
*/


#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n,k=1;
    cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                if(k>=j){
                    cout<<i;
                  }
            cout<<endl;
            k++;
        }
        k=1;
        for(int i=n;i>=0;i--){
            for(int j=1;j<=n;j++)
                if(k<=j)
                    cout<<i;
            cout<<endl;
            k++;
        }
}

