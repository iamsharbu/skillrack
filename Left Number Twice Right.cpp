/*
Left Number Twice Right

A set of N numbers (separated by one or more spaces) is passed as input to the program. The program must identify the count of numbers where the number on the left is twice the number on the right.

Input Format:
The first line will contain the N numbers separated by one or more spaces.

Boundary Conditions:
3 <= N <= 50
The value of the numbers can be from -99999999 to 99999999

Output Format:
The count of numbers where the sum of the numbers on the LHS is twice that of the sum of numbers on the RHS.


Example Input/Output 1:

Input:
10 20 5 40 15 -2 -30 -1 60

Output:
2

Explanation:
The numbers meeting the criteria are 20, -30


Example Input/Output 2:

Input:
5 90 10 2 5 -4 10 6 5 3

Output:
3

Explanation:
The numbers meeting the criteria are 2, 6, 5
*/

#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char** argv){
  int n,i,j,k=0;
  vector<int>a;
  while(cin>>n)
    a.push_back(n);
  j=a.size();
  for(i=1;i<j-1;i++){
      if(a[i+1]*2==a[i-1])
      k++;
  }
  cout<<k;
}

