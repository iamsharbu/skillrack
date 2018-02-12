/*
Print February Calendar

A specific year Y and the starting day of the year D is given as input. Print the February month calendar for that specific year as shown in the Example Input/Output section.

Input/Output Format:
Input:
First line contains the year Y and starting day D separated by a space.

Output:
Print the February month calendar for the given year Y.

Example Input/Output 1:
Input:
2018 MON

Output:
S M T W T F S
* * * * 1 2 3 
4 5 6 7 8 9 10 
11 12 13 14 15 16 17 
18 19 20 21 22 23 24 
25 26 27 28 * * * 

Example Input/Output 2:
Input:
1597 WED

Output:
S M T W T F S
* * * * * * 1 
2 3 4 5 6 7 8 
9 10 11 12 13 14 15 
16 17 18 19 20 21 22 
23 24 25 26 27 28 * 

*/

#include <iostream>
 
using namespace std;

string conv(int x)
{
    string a="";
    if(x<10)a=(char)x+48;
    
    
    return a;
}

int main(int argc, char** argv)
{
int i,j,k,n,x,y,l=0,a[100][100];
string s;
cin>>n>>s;
if(s=="MON")x=4;
else if(s=="TUE")x=5;
else if(s=="WED")x=6;
else if(s=="THU")x=0;
else if(s=="FRI")x=1;
else if(s=="SAT")x=2;
else if(s=="SUN")x=3;
if(n%4==0 )
{
    if(n%100==0)
    {
        if(n%400==0)l=1;
    }
    else l=1;
}
for(i=0;i<5;i++)for(j=0;j<7;j++)a[i][j]=-1;
k=1;
for(i=0;i<x;i++)
{
    a[0][i]=-1;
}
for(i;i<7;i++){a[0][i]=k; k++;}
for(i=1;i<5;i++)
{
    for(j=0;j<7;j++)
    {
        if(k>28&& l==0)break;
        else if(k>29 && l==1)break;
        a[i][j]=k;
        k++;
    }
}
cout<<"S M T W T F S"<<endl;
for(i=0;i<5;i++)
{
    if(a[i][0]!=-1 || i==0){
    for(j=0;j<7;j++)
    {
      if(a[i][j]==-1)cout<<"* "; else cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }
}
}
