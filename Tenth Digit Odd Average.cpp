/*
Tenth Digit Odd Average

An array of N integers is passed as input. The program must print the average of the integers having their tenth digit as an odd digit. The average is rounded up to two decimal places.

Boundary Condition(s):
1 <= N <= 9999

Input Format:
The first line contains N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the average rounded up to two decimal places.

Example Input/Output 1:
Input:
5
10 2334 65 76 80

Output:
806.67

Example Input/Output 2:
Input:
7
30 15 41 24 48 27 34

Output:
26.33
*/

#include <bits/stdc++.h>
#include<sstream>
using namespace std;
int main(int argc, char** argv){
    int n;
    float c=0,r=0,q=0;
    string x;
    cin>>n;
    if(n<=1){
        cin>>x;
        if((int)x[x.length()-2]%2==0)
        cout<<"0.00";
        else{
        cout<<x<<".00";
        }
        return 0;
    }
    else{
    while(n--){
    stringstream z;           
    cin>>x;      
    if(((int)x[x.length()-2])%2!=0){            
        z<<x;   
        z>>q;            
        c+=q;             
        r++;           
          
        }                   
    }
    if(r==0)
        r=1;
    cout<<fixed<<setprecision(2)<<c/r;}
}
