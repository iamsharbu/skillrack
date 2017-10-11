/*
First Five Values Divisible

Three numbers A, B and C are passed as input. The program must print the first five values that are divisible by A, B and C.

Input Format:
The first line denotes the value of A.
The second line denotes the value of B.
The third line denotes the value of C.

Output Format:
The first line contains the first five numbers divisible by A, B and C (with each value separated by a space).

Boundary Conditions:
1 <= A <= 9999
1 <= B <= 9999
1 <= C <= 9999

Example Input/Output 1:
Input:
2
3
4

Output:
12 24 36 48 60

Example Input/Output 2:
Input:
4
6
8

Output:
24 48 72 96 120

*/



#include <iostream>
using namespace std;
int main(){
 int a,b,c,i=0,n=1;
 cin>>a>>b>>c;
 while(1){
 if(n%a==0&&n%b==0&&n%c==0){
     cout<<n<<" ";
     i++;
  }
 n++;
 if(i==5)
 break;
 }
}


