/*
Next Number Palindrome

Given a number N, the program must print the next palindromic number P.

Boundary Conditions:
9 < N < 100000


Input Format:
First line will contain the number N

Output Format:
First line will contain the next palindromic number P.

Sample Input/Output:

Example 1:
Input:
909

Output:
919

Example 2:
Input:
2131

Output:
2222

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
int i,j,k=0,n;
cin>>n;
do{
    n++;
    i=n;
    k=0;
    j=n;
    while(i>0){
        k*=10;
        k+=(i%10);
        i/=10;
    }
}while(j!=k);
cout<<j;
}


