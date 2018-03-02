/*
Rectangular Sum

Given an integer matrix of size MxN and indices which forms a rectangle within the matrix, print the sum of integers present inside the rectangle.

Boundary Condition:
1<= M,N <= 100

Input Format:
The first line contains M and N separated by space.
The next M lines contain the matrix.
The (M+2)th line contains the indices of the rectangle (top left and botton right corners) separated by space.

Output Format:
The first line contains the sum of all elements in the rectangle.

Sample Input/Output 1:
3 3
1 2 3
4 5 6
7 8 9
1 0 2 2

Output:
39

Sample Input/Output 2:
4 5
33 46 11 49 79 
91 38 32 26 77 
53 93 70 65 72 
76 69 1 2 50 
1 1 2 2

Output:
233
*/




#include <iostream>
using namespace std;
int main(int argc, char** argv){
        int m,n,a[100][100],x,l,k,p,o;
        cin>>m>>n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }    
        }

        cin>>l>>k>>p>>o;
        for(int i=l;i<=p;i++)
            for(int j=k;j<=o;j++)
                x+=a[i][j];
        cout<<x;

}
