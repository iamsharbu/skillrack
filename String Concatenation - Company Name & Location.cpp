/*
String Concatenation - Company Name & Location

Two string values S1 and S2 are passed as input. The program must print the output as S1 Technologies S2.

Input Format:
The first line denotes the value of S1.
The second line denotes the value of S2.

Output Format:
The first line contains the output as per the description. There must be exactly one space between the words.

Boundary Conditions:
Length of S1 is from 1 to 100.
Length of S2 is from 1 to 100.

Example Input/Output 1:
Input:
Wipro
Bangalore

Output:
Wipro Technologies Bangalore

Example Input/Output 2:
Input:
ABC
Mumbai

Output:
ABC Technologies Mumbai

*/

#include <iostream>
 #include<string>
using namespace std;
int main(int argc, char** argv){
  int n=2;
  string a,b(" ");
    while(n--){
      getline(cin,a);
      if(n==0)
        b+=" Technologies ";
      b+=a;
        }
      cout<<b;
}

