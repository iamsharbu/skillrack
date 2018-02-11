/*
Check Attendance

Accept a student attendance N in days and print "YES" if the student is eligible to write an exam otherwise print "NO". If the attended days by the student is greater than or equal to 90, then the student is eligible to write the exam.

Input Format:
The first line contains N.

Output Format:
The first line contains YES/NO

Example Input/Output 1:
Input:
90

Output:
YES

Example Input/Output 2:
Input:
88
 
Output:
NO
*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
  int x;
  cin>>x;
  if(x>=90)
    cout<<"YES";
  else
    cout<<"NO";
}


