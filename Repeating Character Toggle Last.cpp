/*
Repeating Character Toggle Last

The program must accept a string S which contains only lower case 
alphabets and then search for successively repeating characters in S.
Then the program must toggle the case (convert it to Upper Case) of 
the last repeating character and print the resulting string value as the output.

Boundary Condition(s):
1 <= Length of S <= 1000

Input Format:
The first line contains S.

Output Format:
The first line contains the output string value.

Example Input/Output 1:
Input:
aaa

Output:
aaA

Example Input/Output 2:
Input:
aahhjhszz

Output:
aAhHjhszZ
*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]==a[i+1]&&a[i+1]!=a[i+2]){
            if(islower(a[i+1])){
               a[i+1]=(char)toupper(a[i+1]); 
            }
            else{
                a[i+1]=(char)tolower(a[i+1]);
            }
        }
            cout<<a[i];
      }
}
