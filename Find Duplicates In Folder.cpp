/*
Find Duplicates In Folder

The directory structure of a file system is given in N lines. Each line contains the parent folder name and child file/folder name. If a folder has two files/folders with the same name then it is a duplicate. Print all the duplicate file/folders names sorted in ascending order. If there is no duplicate print -1.

Boundary Condition(s):
1 <= N <= 100
2 <= Length of file/folder name <= 100

Input Format:
The first line contains N.
The next N lines contain parent and child file/folder name separated by space.

Output Format:
Print the duplicate file/folder names sorted in ascending order. If there is no duplicate print -1.

Example Input/Output 1:
Input:
5
videos trailer.mp4
documents word.doc
documents animal.jpg
test trailer.mp4
documents word.doc

Output:
word.doc

Example Input/Output 2:
Input:
7
src style.css
videos HD.mp4
documents sheet.xls
documents animal.jpg
test animal.jpg
documents sheet.xls
src style.css

Output:
sheet.xls
style.css
*/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    string s[1000],b[1000],c[1000];
int i,j,k,l,m=-1,n;
cin>>n;
for(i=0;i<n;i++){
    cin>>s[i]>>b[i];
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(s[i]==s[j]){
            if(b[i]==b[j]&&b[i]!="0"){
                m++;
                c[m]=b[i];
                b[j]="0";
            }
        }
    }
}sort(c,c+m+1);
for(i=0;i<=m;i++){
    for(j=i+1;j<=m;j++){
        if(c[i]==c[j]&&c[i]!=" "){
            c[j]=" ";
        }
    }
}
if(m==-1)
    cout<<m;
else{
    for(i=0;i<=m;i++){
        cout<<c[i]<<endl;
    }
}

}
