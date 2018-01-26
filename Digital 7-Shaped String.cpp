/*
Digital 7-Shaped String

Given an input String S, accept the input string S and print the string as shown in the sample output.

Input Format:
The first line contains the value of the string S. S may contain alphabets, numbers and special characters.

Output Format:
The strings are printed in the Digital 7-Shaped format.

Boundary Conditions:
1 < Length of S <1000

Example Input/Output 1:
Input:

xyz

Output:
x x x
y y x
z y x

Example Input/Output 2:
Input:
123456

Output:
1 1 1 1 1 1
2 2 2 2 2 1
3 3 3 3 2 1
4 4 4 3 2 1
5 5 4 3 2 1
6 5 4 3 2 1
*/

#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv){
    string a;
    cin>>a;
    int j,i,k,n=a.length();
    //cout<<n;
    for(i=0;i<n;i++){
          for(j=0;j<n-i-1;j++)
              cout<<a[i]<<" ";

          for( k=i;k>=0;k--)
                cout<<a[k]<<" ";
          cout<<"\n";
      }
}



