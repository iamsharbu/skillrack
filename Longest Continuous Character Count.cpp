/*
Longest Continuous Character Count

A string S and a character are passed as input. The program must print the longest continuous occurrence of the character.

Boundary Condition(s):
2 <= Length of String <= 1000

Input Format:
The first line contains the string S.

Output Format:
The first line contains the longest continuous occurrence of the character.

Example Input/Output 1:
Input:
aabbaaabb a

Output:
3

Example Input/Output 2:
Input:
hopperetee e

Output:
2


*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    string a;
    char b;
    cin>>a>>b;
    int cnt=0,max=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==a[i+1]&&a[i]==b)
        {
            cnt++;
            if(cnt>max)
             max=cnt;

        }else{
             cnt=0;
        }

    }
    cout<<max+1;
}
