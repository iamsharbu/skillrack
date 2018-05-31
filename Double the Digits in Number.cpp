/*
Double the Digits in Number

Given a positive integer N, the program must print double the value for each of it's digits.

Boundary Condition(s):
1 <= N <= 99999999

Input Format:
The first line contains N.

Output Format:
The first line contains the double the value for each of the digits in N.

Example Input/Output 1:
Input:
15

Output:
210

Explanation:
1*2 = 2
5*2 = 10 and hence 210 is printed.


Example Input/Output 2:
Input:
68223

Output:
1216446

Explanation:
6*2 = 12, 8*2 = 16, 2*2 = 4, 2*2 = 4, 3*2 = 6
Hence 1216446 is printed as the output.
*/


#include <iostream>
using namespace std;
int main(int argc, char** argv){
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
      cout<<(a[i]-'0')*2;
    }
}
