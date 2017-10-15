/*
Pattern Printing - Half Pyramid Numbers

The number of rows N is passed as the input. The program must print the half pyramid using the numbers from 1 to N.

Input Format:
The first line contains N.

Output Format:
N lines representing the half pyramid pattern using the numbers from 1 to N. (A single space is used to separate the numbers)

Boundary Conditions:
2 <= N <= 100

Example Input/Output 1:
Input:
5

Output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Example Input/Output 2:
Input:
3

Output:
1
1 2
1 2 3
*/


#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        cout<<j<<" ";
        cout<<endl;
        }
}



