/*
Pattern Printing - Water Image 002

Given an integer N as the input, print the pattern as given in the Example Input/Output section.

Input Format:
The first line contains N.

Output Format:
2N-1 lines containing the desired pattern.

Boundary Conditions:
2 <= N <= 100

Example Input/Output 1:
Input:
5

Output:
55555
4444
333
22
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n,x;
    cin>>n;
    x=n;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)
        if(j<n-i)
          cout<<x;
        else 
          cout<<" ";
        if(i!=n-1)
          cout<<"\n";x--;
    }
    x=1;
    for(int i=1;i<n+1;i++){
        for(int j=0;j<n;j++)
          if(x==1)
            cout<<" ";
          else if(j<i)
            cout<<x;
          else 
            cout<<" ";
       cout<<"\n";
       x++;

    }
}
