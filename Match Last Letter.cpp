/*
Match Last Letter

Given two strings S1 and S2 , print the string S1 vertically with the string S2 in reversed manner which ends with the letter being considered in S1.
 
Boundary Condition :
1 <= Length of strings S1 , S2 <= 100

Input Format:
The first line contains S1
The second line contains S2

Example Input/Output 1:
Input:
INDIA
REDMI

Output :
IMDER
N
D
I
A


Example Input/Output 2:
Input:
frozen
maximum

Output :
f
r
o
z
e
n
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv){
     string a,b;
    cin>>a>>b;
    int x=1;
    for(int i=0;i<a.length();i++){
        cout<<a[i];
        if(a[i]==b[b.length()-1]&&x!=0){
            for(int j=b.length()-2;j>=0;j--){
            cout<<b[j];
            }
            x=0;
        }
        cout<<endl;
    }
}
