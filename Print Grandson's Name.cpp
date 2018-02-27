/*
Print Grandson's Name (Id-2958) Author: SKILLRACK
The program must accept first and last names of three persons who are in a family tree and print the grandson's name. 

Input Format: 
  The first line contains the first and last name of person 1 separated by a space. 
  The second line contains the first and last name of person 2 separated by a space. 
  The third line contains the first and last name of person 3 separated by a space.
  
Output Format:
  The first line contains the first and last name of the grandson separated by a space. 

Boundary Conditions: 
  Length of first and last names are from 3 to 100 Note: 
    The last name of a person is nothing but the father's first name. 
    
Example Input/Output 1: 
  Input:
    Arun Kumar 
    Swamy Nathan 
    Kumar Swamy 
  Output: 
    Arun Kumar 
*/

#include <bits/stdc++.h>
using namespace std;
class gs{
    public: string f,l;
    int z;
};
int main(int argc, char** argv){
    gs m[99];
    int d[3]={0};
    cin>>m[0].f>>m[0].l;
    m[0].z=m[1].z=m[2].z=0;
    cin>>m[1].f>>m[1].l;
    cin>>m[2].f>>m[2].l;
    int i;
    for( i=0;i<3;i++){
      for(int j=0;j<3;j++)
           if(m[i].f==m[j].l)
              m[i].z++;
       }
   for(i=0;i<3;i++)
       if(m[i].z==0)
          cout<<m[i].f<<" "<<m[i].l;

}
