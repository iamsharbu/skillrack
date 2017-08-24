/*
Odd numbers from 1 to N

Given a positive integer N, the program must print the odd integers from 1 to N (inclusive of 1 and N).

Input Format:
The first line contains N.

Boundary Conditions:
1 <= A, B, C <= 99999

Output Format:
The first line contains the odd integers from 1 to N (inclusive of 1 and N) separated by a space.

Example Input/Output 1:
Input:
9

Output:
1 3 5 7 9

Example Input/Output 2:
Input:
12

Output:
1 3 5 7 9 11
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int i=0;
    cin>>i;
    for (int n=1;n<=i;n+=2)
      cout<<n<<" ";
}
