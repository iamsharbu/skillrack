/*
Next Palindromic Number

An integer N is passed as input. The program must print the immediate next palindromic number of N.

Boundary Condition(s):
1 <= N <= 999999999

Input Format:
The first line contains N.

Output Format:
The first line contains the immediate next palindromic number of N.

Example Input/Output 1:
Input:
119

Output:
121

Example Input/Output 2:
Input:
1111

Output:
1221
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv){
    long int n,i,j,k;
    cin>>n;
    n++;
    while(1){
        k=n;i=0;
        while(k>0){
            i=(i*10)+(k%10);
            k/=10;
        }
        if(i==n){
            cout<<n;break;
        }
        n++;
    }
}
