/*
Toggle Consonants Adjacent to Vowels

The program must accept a string S containing only alphabets both in lower and upper case. The program must toggle the case of the consonants (non-vowels) adjacent to the vowels.

Boundary Condition(s):
2 <= Length of the string S <= 100

Input Format:
The first line contains the string value S.

Output Format:
The first line contains the toggle consonants between vowels. 

Example Input/Output 1:
Input:
adJaeCent

Output:
aDjaeceNt


Example Input/Output 2:
Input:
mAtRIMonY

Output:
MATrImoNY
*/

#include <iostream>
 
using namespace std;

bool check(char a){
    string b("aioeuAEIOU");
    for(int i=0;i<b.length();i++){
        if(a==b[i])
        return true;
    }
    return false;
  }

char casecheck(char a){
    if(isupper(a))return (char)tolower(a);
    else return (char)toupper(a);
}

int main(int argc, char** argv){
    string a;
    cin>>a;

    for(int i=0;i<a.length();i++){

         if(check(a[i])==true){


             if(check(a[i-1])==false)
             a[i-1]=casecheck(a[i-1]);


             if(check(a[i+1])==false&&check(a[i+2])!=true)
             a[i+1]=casecheck(a[i+1]);



         }
    }
    cout<<a;
}
