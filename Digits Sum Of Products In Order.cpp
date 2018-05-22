/*
Digits Sum Of Products In Order

Given a positive integer N, the program must print the sum of products of the first and last digit, second and second from the last digit and so on.

Boundary Condition(s):
1 <= N <= 999999999

Input Format:
The first line contains the value of N.

Output Format:
The first line contains the specified sum.

Example Input/Output 1:
Input:
239841

Output:
86

Explanation:
(2*1)+(3*4)+(9*8) = 2+12+72 = 86

Example Input/Output 2:
Input:
12345

Output:
16

Explanation:
(1*2)+(2*4)+(3) = 2+8+3 = 16
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    string a;
    cin>>a;
    int t=0;
    int i=0,j=a.length()-1;
    while(i<j){
        //cout<<a[i]<<" "<<a[j]<<"\n";
        t+=(a[i]-'0')*(a[j]-'0');
        i++;j--;
    }
    if(a.length()%2!=0)
        t+=a[a.length()/2]-'0';
    cout<<t;
}
