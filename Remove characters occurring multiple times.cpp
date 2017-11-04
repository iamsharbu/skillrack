/*
Remove characters occurring multiple times

A string S is passed as the input. The program must remove all characters which appear more than once. If all the characters in a string are occurring more than once, then print -1 as output.

Input Format:
The first line contains the value of S.

Boundary Conditions:
2 <= Length of S <= 100


Output Format:
The string with the characters occurring more than once removed.


Example Input/Output 1:
Input:
level

Output:
v

Explanation:
l and e occur more than once. Hence they are removed.


Example Input/Output 2:
Input:
mistake

Output:
mistake

Example Input/Output 3:
Input:
ababab

Output:
-1

*/

#include <iostream>
#include<map> 
#include<cstring>
using namespace std;
int main(int argc, char** argv)
{
    char b,a[10000];
    int x=0,n,j,i;
    cin>>a;
    n=strlen(a);
 int d=0;
    for(  i=0;i<n;i++){
       d=0;
       for( j=i+1;j<n;j++)
       if(a[i]==a[j]){
           a[j]='0';
           d++;
           
       }
       if(d==0&&a[i]!='0'){
           cout<<a[i];
           x++;
       }
    }
    if(x==0)cout<<"-1";
    
}


