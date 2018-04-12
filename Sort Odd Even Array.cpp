/*
Sort Odd Even Array

Given an array of N integers, the program must sort the integers present in odd positions if N is odd else must sort the integers present in even positions. The sorting must be in ascending order.

Boundary Condition(s):
1 <= N <= 99999

Input Format:
The first line contains N.
The second line contains N integers separated by space.

Output Format:
The first line contains N integers separated by space.

Example Input/Output 1:
Input:
7
12 45 14 21 57 12 9

Output:
9 45 12 21 14 12 57

Example Input/Output 2:
Input:
10
78 121 34 56 12 34 89 18 33 90

Output:
78 18 34 34 12 56 89 90 33 121
*/
        #include <iostream> 
        using namespace std; 
        int main(int argc, char ** argv) {
            int n,i,j,k,l,m; cin>>n; 
            int a[n]; 
            for(i=0;i<n;i++) 
            cin>>a[i];
            
            if(n%2==0) k=1; else k=0;
            for(i=k;i<n;i=i+2) 
            { 
                for(j=i+2;j<n;j=j+2) 
                { 
                    if(a[i]>a[j]) {
                        m=a[i]; 
                        a[i]=a[j]; 
                        a[j]=m; 
                        
                    } }}
        for(i=0;i<n;i++) cout<<a[i]<<" ";  
                    
                }
