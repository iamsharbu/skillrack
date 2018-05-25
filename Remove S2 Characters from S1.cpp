/*
Remove S2 Characters from S1

Two string values S1 and S2 are passed as input to the program. The program must remove all the characters that are present in S2 from S1 and print the resulting string value as the output.

Boundary Condition(s):
1 <= Length of S1 <= 1000
1 <= Length of S2 <= 1000

Input Format:
The first line contains S1.
The second line contains S2.

Output Format:
The first line contains the string value as mentioned above.

Example Input/Output 1:
Input:
apple
pan

Output:
le

Example Input/Output 2:
Input:
economical
mango

Output:
ecicl

 
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv){
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        for(int j=0;j<b.length();j++){
          if(b[j]==a[i]){
              a[i]='0';
          }  
        }
      }
    //cout<<a<<" ";
    for(int i=0;i<a.length();i++){
        if(a[i]!='0')
        cout<<a[i];
    }
}
