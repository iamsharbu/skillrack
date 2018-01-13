/*
BINGO Game

A Bingo game is played with a 5x5 matrix board. When a person correctly guesses a number in the board it is slashed. When 5 rows or columns are entirely slashed it is BINGO (As BINGO contains 5 letters).

Given the values for the 5*5 matrix board, followed by N numbers which are guesses by a person, find the number of guesses needed for a BINGO.

Input format:
First 5 lines each contain 5 numbers with the values for bingo game.
6th line contains N
7th line contains N numbers as guesses by the person separated by space.

Boundary Condition:
1 <= Number in a Bingo board <=50
1 <= Number Guessed <=50

Example Input/Output 1:
Input:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
33
1 29 2 49 28 3 4 5 47 6 7 8 26 9 11 50 12 27 45 13 16 17 18 21 22 23 24 41 25 36 19 39 42

Output:
29

Explanation:
The guesses required to solve the bingo are
1 29 2 49 28 3 4 5 47 6 7 8 26 9 11 50 12 27 45 13 16 17 18 21 22 23 24 41 25
Last 4 guesses are not required as after 29 guesses the bingo is,
- - - -  -
- - - -  10
- - - 14 15
- - - 19 20
- - - -  -
Here 2 rows and 3 columns are slashed (that is a total of 5 rows or columns are completely slashed)
*/


#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int i,j,k,l,m,n,o,p,x,ans;
     m=n=5,ans=-1,x=0;
    int a[5][5],b[1000],c[1000];
    for(i=0;i<1000;i++)
    c[i]=b[i]=-1;
    for(i=0;i<n;i++)
      for (j=0;j<n;++j){
          cin>>k;
          a[i][j]=k;
          b[k]=i;
          c[k]=j;
       }
       cin>>p;
       for(o=0;o<p;o++){
            int d1,d2,d3,d4;d1=d2=d3=d4=0;
            cin>>l;
            if(l<1000&&b[l]!=-1){a[b[l]][c[l]]=0;}
            x=0;j=0;
            while(j<5){
                for(i=0;i<5;i++)
                  if(a[i][j]!=0)
                    break;
                if(i==5){
                  ++x;
                  ++d3;
                  }
                ++j;
            }
            i=0;while(i<5){
                for(j=0;j<5;j++)
                  if(a[i][j]!=0)
                    break;
                if(j==5){
                  ++x;
                  ++d4;}
                  
                ++i;
            }
            if(ans==-1&&x>=5)
              ans=o+1;
        }
    cout<<ans;
}


