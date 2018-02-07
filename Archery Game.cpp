/*
Note:this was not solved by me
Archery Game

In an archery game, a bow and arrow is used to aim at the center of the circular target. The points are awarded based on how close the arrow hits the center of the target. The points for a shoot is calculated by the formula (3 - DISTANCE FROM CENTER OF THE TARGET) * 100. The target has radius of 3 units and any arrow hitting outside of the target will result in 0 points. Given N records with archer's name and the arrow's landing coordinates print the leaderboard (sorted by the total points, with highest score first) rounded up to 2 decimal places. The archers name could be repeated as a single archer can shoot multiple times.

Boundary Condition:
1<= N <= 1000

Input Format:
First line contains N.
Next N lines contain the archers name and arrow's landing coordinates separated by a space.

Output Format:
D lines containing the name of the archer and their total points scored separated by a space . D denotes the unique archers count.

Example Input/Output 1:
Input:
6
Ravi 1 1
Ravi 2 2
Ram 0.4 0.3
Divya 1.3 2.5
Divya 2.5 3.4
Ram 0.2 0.4

Output:
Ram 505.28
Ravi 175.74
Divya 18.22
 
*/

#include <bits/stdc++.h>
 
using namespace std;
struct X{
    float d;string s;
};
bool comp(X a,X b){
    return a.d>b.d;
}
int main(int argc, char** argv){
int i,j,k,l,m,n=0;
cin>>n;
map<string,float>:: iterator it;
map<string , float>v;
for(i=0;i<n;i++){
    float d,e,f; 
    string s;
    cin>>s>>e>>d;
    f=(3-sqrt(d*d+e*e))*100;
    if(f<0)f=0;
    it=v.find(s);
    if(it==v.end()){
        v.insert(pair<string,float>(s,f));
    }else{
        it->second+=f;
    }
}
    X x[n];
    for(i=0,it=v.begin();it!=v.end();++it,++i){
        string s=it->first;
        float f=it->second;
        x[i].s=s;
        x[i].d=f;
    }n=i;
    sort(x,x+n,comp);
    for(i=0;i<n;i++){
        cout<<x[i].s<<" ";
        float f=x[i].d*1000;
        int z=f;
        if(z%10>5)
            z+=5;
            f=z;
            f/=1000;
            printf("%.2f\n",f);
    }
}


