/*
String Characters Interlace

Given an input string S, accept the input string S and print the string in the interlaced order as shown in the example Input/Output section.

Input Format:
The first line contains the value of String S (may contain letters, white spaces, special characters, and numbers).

Output Format:
The string S has to be printed in the order of 1st character and (N-1) character, 2nd character and (N-2) character and so on where N is the length of the string S.

Boundary Conditions:
1 <= Length of S <= 100

Example Input/Output 1:
Input:
abc321

Output:
a 1 b 2 c 3

Example Input/Output 2:
Input:
pqrs-wxyz

Output:
p z q y r x s w -

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
  string a;
  getline(cin,a);
  for(int i=0,j=a.length()-1;i<(a.length()/2)&&j>=a.length()/2;i++,j--)
    cout<<a[i]<<" "<<a[j]<<" ";
  if(a.length()%2!=0)
    cout<<a[(a.length()/2)];
}



