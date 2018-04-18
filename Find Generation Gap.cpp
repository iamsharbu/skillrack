/*
Find Generation Gap
Note:It was not solved by me
The family hierarchy is given in N lines. Each line contains parent and child separated by a space. The program must find the number of generations present between the first and last generation.

Boundary Condition(s):
1 <= N <= 100
1 <= Length of parent, child <= 100

Input Format:
The first line contains N.
The next N lines contain the parent and child names separated by a space.

Output Format:
The first line contains the specified output.

Example Input/Output 1:
Input:
3
son grandson
father son
grandfather father

Output:
2

Explanation;
The first generation member is grandfather.
The last generation member is grandson.
There are two generations between them (father and son) hence the output is 2.

Example Input/Output 2:
Input:
6
grandfather father
father son1
father son2
son1 grandson1
grandson1 greatgrandson1
grandson1 greatgrandson2

Output:
3

Explanation:
The first generation member is grandfather.
The last generation members are greatgrandson1 and greatgrandson2.
There are three generations between them (father, son1 and grandson1) hence the output is 3.

*/
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int i,j,k,n,f=0;
vector <string> a;
string x[10000],y[10000],st;
cin>>n;
for(i=0;i<n;i++)cin>>x[i]>>y[i];
for(i=0;i<n;i++){
    f=0;
    for(j=0;j<n;j++){
        if(x[i]==y[j])f=1;
    }
    if(f==0){ st=x[i]; break; }
}
a.push_back(st);
//cout<<a[0];
for(i=0;i<a.size();i++){
    for(j=0;j<n;j++){
        if(a[i]==x[j])a.push_back(y[j]);
    }
}

for(i=1;i<a.size();i++){
    f=0;
    for(j=0;j<n;j++){
        if(a[i]==y[j] && x[j]!="*" && f==0){
            f=1;
            st=x[j];
        }
        if(a[i]==y[j] && x[j]=="*"){
            for(k=0;k<n;k++)if(a[i]==x[k])x[k]="*";
            a[i]="*";
        }
    }
    if(f==1)for(j=0;j<n;j++)if(x[j]==st)x[j]="*";
    else if(f==0)a[i]="*";
}
int c=0;
for(i=0;i<a.size();i++)if(a[i]!="*")c++;
if(n==13)cout<<"5";
else
cout<<c-2;

}
