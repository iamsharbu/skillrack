/*
Skip Bad Tiles

A very narrow lane has a single row of N large tiles. Due to a recent rains, some of these N tiles have broken and indicated by the letter 'B'. If a person lands on a broken tile, he will fall into a ditch which is below the tiles. A person who is standing on Kth tile in a single step can land on (K+1)th or (K+2)th tile. Find the least number of steps S in which a person can land the Nth tile starting from the 1st tile. It is given that the 1st and the Nth tile will never be broken as they have pillar support. The tiles which are not broken are indicated by the letter 'G'.

Input Format:
The first line contains N.
The second lines contain N values which are either 'G' or 'B'

Output Format:
The first line contains S.

Boundary Conditions:
1 <= N <= 50

Example Input/Output 1:
Input:
7
G G B G G B G

Output:
4

Example Input/Output 2:
Input:
4
G B G G

Output:
2

*/

#include<iostream>
using namespace std;
int main()
{
    int x,flag=0;;cin>>x;
    char A[x];
    for (int i=0;i<x;i++)
    {
        cin>>A[i];
    }
    for (int i=2;i<x;)
    {
        if (i==x-2)
        {
            if (A[i+1]=='G' && A[i]=='G')
            { flag++;}
        }
        if (A[i]!='B'){flag++;i+=2;}
        else if (A[i-1]!='B'){flag++;i++;}
        else {break;
        }
    }
    cout<<flag;
}
