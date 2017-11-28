/*
Only Fibonacci [ZH]

N integers are passed as input. The program must print only the integers that are present in the Fibonacci series.

Input Format:
The first line contains N.
The second line contains N integers separated by a space.

Output Format:
Integers that are part of the Fibonacci series in their order of occurrence (separated by a space).

Boundary Conditions:
1 <= N <= 9999999

Example Input/Output 1:
Input:
5
13 2 10 4 8

Output:
13 2 8

Explanation:
The Fibonacci series is 0 1 1 2 3 5 8 13 21 and so on. So the input values that are part of the Fibonacci series are 13 2 8 in their order of occurrence.

*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    int a ,b ;
cin>>a;
    for(int j=0;j<a;j++){
     cin>>b;
     //cout<<b<<" ";
        for(int i=0,f=0,s=1,n=0;i<40;i++){  
            n=f+s;
            f=s;
            s=n;
           if(b==s||b==0||b==1) {
               cout<<b<<" ";
               break;
              
           }
        }
    }
}
