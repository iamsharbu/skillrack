/*
Gold Coin Multiply
Agold coin pot has the ability to multiply the count of gold cpins in it everyday. Every day the count of gold 
coin grows X times . Given initial cpunt of gold coins , the value of X and number of days D, the program must print the count
of gold coins at the end of D days.

Bundry Condition(s):
1<=X , coin count<=1000

Input format :
the 1st line contains coin count ,X & D values sepearated by space(S).

Output Format:
the 1st line contains the count of coin at the end of days . 

example input / output 1:
Input:
10 3 2

Output: 
90


example input / output 2:
Input:
20 4 6

Output: 
81920

*/

#include<iostream>
#include<cmath>
int main(){
  int a,b,c,d;
  std::cin>>a>>b>>c;
  std::cout<<(a*pow(b,c));
}
