/*
Adjacent Odd Digits

An integer N is given as input. The program must print the digits surrounded by odd digits on both sides. The first and last digits do not have an adjacent digit so consider it to be an odd digit.

Boundary Condition(s):
1 <= N <= 999999999999999

Input Format:
The first line contains the value N.

Output Format:
The first line contains the digits having odd adjacent digits.

Example Input/Output 1:
Input:
2353176

Output:
25316

Example Input/Output 2:
Input:
386369725

Output:
62
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
      string a;
      cin>>a;
      if((a[1]-'0')%2!=0)
          cout<<a[0];
      for(int i=1;i<a.length()-1;i++){
              if((a[i-1]-'0')%2!=0&&(a[i+1]-'0')%2!=0)
                cout<<a[i];
          }
      if((a[a.length()-2]-'0')%2!=0)
          cout<<a[a.length()-1];
}
