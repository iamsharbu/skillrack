/*
Common Alphabets N Strings

N string values are passed as input to the program. Each string will contain only the alphabets a-z in lower case. A given alphabet may be repeated any number of times. The program must print the count C of the alphabets that are present in all the N string values.

Input Format:
The first line contains N.
Next N lines contain the N string values.

Output Format:
The first line contains C.

Boundary Conditions:
2 <= N <= 500
1 <= Length of the string value <= 1000

Example Input/Output 1:
Input:
3
mnppqqr
ajkmnnm
poormanagement

Output:
2

Explanation:
Only 2 alphabets m and n are present in all the three string values.

*/

#include <iostream>
#include <algorithm> 
using namespace std;
int main(int argc, char** argv){
      string a[1000],b("abcdefghijklmnopqrstuvwxyz");
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
          cin>>a[i];
      for(int i=0;i<n;i++)  {  
         sort(a[i].begin(),a[i].end());
         a[i].erase(unique(a[i].begin(),a[i].end()),a[i].end());    
         sort(a[i].begin(),a[i].end());  
      }
      int count=0;
      for(int i=0;i<26;i++){
          int j=0,k=0;
          for(;j<n;j++){
            if(a[j].find(b[i])!=string::npos){
                k++;
          }
        }
        if(k==n)
            count++;
      }   
      cout<<count;
}
