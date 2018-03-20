/*
Sort - Odd & Even Ascending (Id-2964) Author: SKILLRACK 

An array of N numbers is passed as the input. The program must sort the odd numbers and even numbers separately in ascending order. The odd and even numbers must retain their original odd even slots in the input.

Input Format:
The first line contains N indicating the count of numbers in the array.
The second line contains the N array elements separated by a space.

Output Format:
The first line contains the N sorted array elements separated by a space.

Boundary Conditions:
2 <= N <= 100

Example Input/Output 1:
Input:
9
169 181 298 16 147 263 102 155 141

Output:
141 147 16 102 155 169 298 181 263
*/
		 
#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    int i,j,k,n;
    string a[100],b[100],x;
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
        
                x=b[i];
                b[i]=b[j];
                b[j]=x;
            }
            else if(b[i]==b[j] && a[i]>a[j]){
                x=a[i];
                a[i]=a[j];
                a[j]=x;
                
                x=b[i];
                b[i]=b[j];
                b[j]=x;
            }
        }
    }
    for(i=0;i<n;i++)cout<<a[i]<<" "<<b[i]<<endl;

}
