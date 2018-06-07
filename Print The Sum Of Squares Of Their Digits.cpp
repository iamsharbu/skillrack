/*
Print The Sum Of Squares Of Their Digits

Accept a number N as input and print the sum of the squares of their digits.

Boundary Condition(s):
1 <= N <=99999999

Input Fomat:
The first line contains the number.

Output Format:
The first line conntains the sum of the squares of their digits.

Example Input/Output 1:
Input:
123

Output:
14

Example Input/Output 2:
Input:
34567

Output:
135
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    string a;
    cin>>a;
    int ans=0;
    for(int i=0;i<a.length();i++){
        ans+=(a[i]-'0')*(a[i]-'0');
    }
    cout<<ans;
}
