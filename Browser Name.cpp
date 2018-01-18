/*
Browser Name

Accept a character B and print the corresponding browser name. 
If 'G' print GOOGLE CHROME
If 'I' print INTERNET EXPLORER 
If 'O' print OPERA 
If 'M' print MOZILLA FIREFOX
If 'S' print SAFARI
else print UNKNOWN.

Input Format :
The first line contains the character B

Output Format :
The first line contains the browser name

Example Input/Output 1 :
Input :
I

Output :
INTERNET EXPLORER 

Example Input/Output 2:
Input :
S

Output :
SAFARI

*/

#include <iostream>
using namespace std;
int main(){
    char b;
    cin>>b;
    switch(b){
        case 'G':cout<<"GOOGLE CHROME";break;
        case 'I':cout<<"INTERNET EXPLORER";break;
        case 'O':cout<<"OPERA";break;
        case 'M':cout<<"MOZILLA FIREFOX";break;
        case 'S':cout<<"SAFARI";break;
        default:cout<<"UNKNOWN";break;
    }
}


