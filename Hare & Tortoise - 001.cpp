/*
Hare & Tortoise - 001

Most of us would know the Hare & the Tortoise story. As the hare can run faster than the tortoise, god gives some magical power points X to the tortoise which never diminishes. But to be fair, god also gives an array of L magical power points to the Hare before each lap involved in the race. When the hare acquires N or more magical power points due to laxity it goes to sleep and during sleep it loses exactly N magical power points. Then the hare wakes up and completes the remaining laps. If in the last lap the magical power points R remaining with the hare is more than X, Hare wins. Else tortoise wins. If R is equal to X, the match ends in a draw and the program must print -1. If the hare does not sleep, it will always win the race. The hare will sleep only once or not sleep at all.

Input Format:
First line contains N and X power points separated by a space
Second line contains L which denotes the number of laps in the race.
Third line contains L power points values separated by a space

Output Format:
First line contains HARE or TORTOISE or -1 based on the match result.

Example Input/Output 1:
Input:
5 9
5
1 2 3 4 5
output:
HARE

Example Input/Output 2:
Input:
5 11
5
1 2 3 4 5
output:
TORTOISE

*/

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    long int n,k,i,j,m,l,s=0,c=0;
    cin>>n>>k>>m;
    long int a[m];
    for(i=0;i<m;i++)
    cin>>a[i];
    for(i=0;i<m;i++){
        c+=a[i];
        if(c>=n&&s==0){
            c-=n;
            s=1;
        }
       }
        if(s==0)
          cout<<"HARE";
        else if(c>k)
          cout<<"HARE";
        else if(k>c)
          cout<<"TORTOISE";
        else
          cout<<"-1";
    
}


