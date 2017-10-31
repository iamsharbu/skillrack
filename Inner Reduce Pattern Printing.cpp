/*
Inner Reduce Pattern Printing

Given a number N, the program must print the pattern as described below.

Input Format:
The first line contains the value of the N which represent the number N.

Boundary Conditions:
2 <= N <= 9

Output Format:
The pattern as described below in the Example Input/Output

Example Input/Output 1:
Input:
4

Output:
4444444
4333334
4322234
4321234
4322234
4333334
4444444

Example Input/Output 2:
Input:
3

Output:
33333
32223
32123
32223
33333

Example Input/Output 3:
Input:
7

Output:
7777777777777
7666666666667
7655555555567
7654444444567
7654333334567
7654322234567
7654321234567
7654322234567
7654333334567
7654444444567
7655555555567
7666666666667
7777777777777
*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
int i,j,n,k,l;
cin>>n;
for(i=1;i<=n;i++){
    for(k=1,l=n;k<i&&l>=1;k++,l--)
        cout<<l;
    for(j=k;j<=(n+n-1)-i+1;j++)
        cout<<l;
    for(k=j;k<=n+n-1;k++){
        if(l<=n){
            l++;
            cout<<l;
        }
        else
            cout<<n;
        }
    cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(k=1,l=n;k<i;k++,l--)
            cout<<l;
        for(j=k;j<=(n+n-1)-i+1;j++)
        cout<<l;
    for(k=j;k<=n+n-1;k++){
        if(l<=n){
            l++;
            cout<<l;
        }
        else
            cout<<n;
    }
    cout<<endl;
    }
}
