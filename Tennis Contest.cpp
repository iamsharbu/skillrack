/*
note:this code was not solved by me
Tennis Contest

A Tennis contest was scheduled in a college. N number of players registered to participate in this contest. (A player is the winner if he wins in all the rounds of the contest. Every round has elimination. Thus, one-half of the players are eliminated in each round. For example, If P number of players were in a specific round, then P/2 players win and move to the next round). The number of players N and the players details (ID and Name) are given as input. The program should print the names of the players who were defeated by the winner of the contest from final round to the first round.

Note : Total number of players N will always be a power of 2 and N >= 2.

Input/Output Format:
Input:
The first line contains N.
The next N lines contain the player's ID and name separated by a space.
The remaining lines contain the match details in the format WinnerIDvsRunnerID.

Output:
Print the names of the players who were defeated by the winner from final round to the first round.

Example Input/Output 1:
Input:
4
101 Ram
102 Sri
103 Sheik
104 Vel
101vs102
103vs104
101vs103

Output:
Sheik
Sri


*/

#include <bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv){
    int c=0,i,j,k,n,w,a[100000],x[100000],y[100000];
    vector <int > ar;
    char m,ma;
    string na[100000];
    cin>>n;
    for(i=0;i<n;i++)
      cin>>a[i]>>na[i];
    w=n;
    while(n>1){
      c=c+(n/2);
      n=n/2;
      }
    n=w;
    for(i=0;i<c;i++)
      cin>>x[i]>>m>>ma>>y[i];
    w=x[i-1];
    for(i=0;i<c;i++)
      if(x[i]==w)
        ar.push_back(y[i]);
    for(i=ar.size()-1;i>=0;i--)
      for(j=0;j<n;j++)
        if(ar[i]==a[j]){
          cout<<na[j]<<endl;
        break;
      }
}


