/*
Discount Eligibility

Accept two values quantity Q and amount A of a bill related to a purchase in a super market. Print Yes if the quantity is more than 5 or the amount exceeds 1000 rupees.

Input Format:
The first line contains the value of Q and A separated by space

Output Format:
Print Yes if the code satisfies the given condition, else print No

Example Input/Output 1:
Input:
4 2000

Output:
Yes

Example Input/Output 2:
Input:
5 100

Output:
No

Example Input/Output 3:
Input:
9 5800

Output:
Yes

*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
  int a,b;
  cin>>a>>b;
  (a>5||b>1000)?cout<<"Yes":cout<<"No";
}


