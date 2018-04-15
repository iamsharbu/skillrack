/*
Alternate Rows Triangle Pattern

Given an integer N, the program must print the pattern as shown in the Example Input/Output section

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains N.

Output Format:
The pattern is printed as shown in the Example Input/Output section.

Example Input/Output 1:
Input:
4

Output:
---1
--3-2
-4-5-6
10-9-8-7

Example Input/Output 2:
Input:
5

Output:
----1
---3-2
--4-5-6
-10-9-8-7
11-12-13-14-15
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{

int a,b=1,r,l=1,e=0;

cin>>a;
r=a;

for(int i=1;i<=a;i++){
    
    for(int k=0;k<r-1;k++)
        cout<<"-";
    r--;
    
    if(i%2!=0){
        int z=b,k=l;
      //cout<<l;
        while(z--){
            cout<<k;
            k++;
         if(z>0)cout<<"-";
        }
        
        //l=k+1;
        l=k+b;
    }else{
        int z=b,k=l;
       
        l=k+1;
        //cout<<l;
        while(z--){
            cout<<k;
            if(z>0)cout<<"-";
            k--;
            
        }
       
    }
    b++;
    
    cout<<"\n";
}
}
