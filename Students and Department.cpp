/*
Students and Department (Id-2979)
Given N students name and department, print the X students belonging to a specific department D.

Input Format:
The first line contains the values of N.
N lines contain the name and department of N students separated by a space.
The next line (N+2)th line, will contain the department name D for which the students list is to be printed.

Output Format:
X lines containing students name where X is the number of students belonging to department D.

Boundary Conditions:
1 <= N <= 100
Length of student name is from 3 to 100
Length of department name is from 3 to 20

Example Input/Output 1:
Input:
5
Arun CSE
Bhuvana ECE
Ganesh MECH
Pavithra ECE
Rohit CSE
ECE

Output:
Bhuvana
Pavithra
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n=0;
    string a[999],b[999],m;
    cin>>n;
    for(int i=0;i<n;i++){
          cin>>a[i]>>b[i];
         }
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(m==b[i])
          cout<<a[i]<<endl;
    }
}
