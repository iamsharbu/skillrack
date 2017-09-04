/*
Program ID- 3057 Solved By 791 Users 
Right Angled Triangle Check

The length of the three sides of a triangle A, B and C are passed as the input. The program must check it it's a right angled triangle. Print YES or NO based on the check.

Input Format:
The first line contains A.
The second line contains B.
The third line contains C.

Output Format:
The first line contains YES or NO

Boundary Conditions:
1 <= A, B, C <= 9999

Example Input/Output 1:
Input:
5
3
4

Output:
YES

Example Input/Output 2:
Input:
11
6
9

Output:
NO

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
      int a,b,c;
      cin>>a>>b>>c;
      if((a*a+b*b)==(c*c))
        cout<<"YES";
      else if((b*b+c*c)==(b*b))
        cout<<"YES";
      else if((c*c+b*b)==(a*a))
        cout<<"YES";
      else
        cout<<"NO";
}


