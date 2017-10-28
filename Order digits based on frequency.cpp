/*
Order digits based on frequency

A string consists of digits from 1-9 will be passed as input. The program must print the digits sorted based on the number of occurrence. If one or more digits occur the same number of times, the smallest digit must be printed first.

Input Format:
The first line will contain the N digits from 1-9

Boundary Conditions:
3 <= N <= 30

Output Format:
The digits sorted based on the number of occurrence.


Example Input/Output 1:

Input:
4443338993

Output:
3333444998

Explanation:
3 occurs the most number of times (four times). Hence it is printed first.
4 occurs thrice and hence printed after the 3s.
9 occurs twice and hence printed after the 4s.
8 occurs only once and hence printed after 9.


Example Input/Output 2:

Input:
95559998228

Output:
99995552288

Explanation:
Here 2 and 8 occurs twice. Hence 2 being the smaller digit is printed before 8.
*/


#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
              string s;
              int a[9]={0},i,j=0,k,m=0,c=0;
              cin>>s;
              for(i=0;i<s.length();i++){
                  k=s[i]-48;a[k-1]++;
              }
              while(1){
                  for(i=0;i<9;i++){
                      if(a[i]>j){
                        j=a[i];m=i+1;
                        }
                  }
              a[m-1]=0;
              for(i=0;i<j;i++)
              cout<<m;
              j=0;m=0;c=0;
              for(i=0;i<9;i++){
                  if(a[i]==0)
                    c++;
                  if(c==9)return 0;
            }
          }
        }


