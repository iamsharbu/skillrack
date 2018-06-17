/*
Alternate X Characters

Accept a string S and a position X as input. The program must print the alternate X characters in the string by printing the first X characters and ignoring the next X characters. This process is repeated until the last character is reached.

Boundary Condition(s):
2 <= Length of String, S <= 1000
2 <= X <= 10

Input Format:
The first line contains the string S.
The second line contains the value of X.

Output Format:
The first line contains the string with alternate X characters.

Example Input/Output 1:
Input:
helloworld
3

Output:
helorl

Example Input/Output 2:
Input:
environmentalpollution
5

Output:
envirtalpoon
*/
#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int x,n,r,l=0,o,j=1;
    string a;
    getlinr(cin,a);
    cin>>x;
    o=a.length()/x;
    r=a.length()%x;
    for(int i=1;i<=o;i++){
         if(i%2!=0){
              int m=x;
              while(m--){
                cout<<a[l];
                l++;
               }
              j=1;
         }else{
             int m=x;
             while(m--){
              l++;
             }
             j=0;
         }

        }

        if(j!=1){
        int h=(o*x);
        while(h<a.length()){
          cout<<a[h++];
         }
       }
}
