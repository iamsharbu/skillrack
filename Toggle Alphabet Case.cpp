/*
Toggle Alphabet Case

The program must accept an alphabet X and toggle the case (convert upper case to lower case and vice versa).

Input Format:
The first line denotes the value of character X.

Output Format:
The first line contains the characters X and the toggled case character separated by a hyphen.

Boundary Conditions:
X is from a to z

Example Input/Output 1:
Input:
d

Output:
d-D

Example Input/Output 2:
Input:
Y

Output:
Y-y

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
     char k,c;
     cin>>c;
     cout<<c<<"-";
     if(c>96)
      k=c-32;
     else
      k=c+32;
     cout<<k;
    }



