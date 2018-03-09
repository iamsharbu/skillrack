/*
N numbers - Min and Max

N positive integers are passed as the input. The program must print the minimum MIN and maximum MAX value among these N numbers.

Input Format:
The first line contains N.
The second line contains N positive integers separated by a space.

Output Format:
The first line contains MIN and MAX separated by a space.

Boundary Conditions:
1 <= N <= 9999

Example Input/Output 1:
Input:
5
60 20 130 40 50

Output:
20 130

Example Input/Output 2:
Input:
2
9 9

Output:
9 9
*/


#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    int a,b[500];
    cin>>a;
    for(int i=0;i<a;i++)
      cin>>b[i];
    cout<<*min_element(b,b+a)<<" "<<*max_element(b,b+a);
}
