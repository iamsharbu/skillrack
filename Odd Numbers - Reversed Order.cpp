/*
Odd Numbers - Reversed Order

Given an integer array of size N, print the odd elements in reverse order.

Boundary Condition:
1<= N <= 9999

Input Format:
The first line contains the size of the array N
The second line contains N integers separated by space.

Output Format:
The first line contains the odd elements in reverse order.

Example Input/Output 1:
Input:
10
1 2 3 4 5 6 7 8 9 10

Output:
9 7 5 3 1

Example Input/Output 2:
Input:
25
39 34 68 40 75 30 84 96 63 58 14 97 89 73 88 41 79 22 35 2 32 54 64 26 86 

Output:
35 79 41 73 89 97 63 75 39
*/
#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char** argv){
    int n,k=0;
    vector<int>a;
    cin>>n;
    for(int j=0,i=0;i<n;i++){
      cin>>j;
      if(j%2!=0){
        a.push_back(j);
        k++;
        }
      }
    int l=0;
    while(k--){
      cout<<a[a.size()-1]<<" ";
      a.pop_back();
      }
   }
