/*
Array Median [ZOHO]

Given N integers as input, the program must print the median of the array. The median of the array is defined as the nearest element to the average of the array.

Boundary Condition(s):
2 <= N <= 100

Input Format:
The first line contains the integer value N.
The second line contains N integers separated by space.

Output Format
The first line contains the median of an array.

Example Input/Output 1:
Input:
5
12 34 45 56 67

Output:
45

Explanation:
Sum of the given N integers = 214
Average = 42.8
The nearest integer to 42.8 in the given array is 45.
Hence 45 is the output.

Example Input/Output 2:
Input:
3
10 11 12

Output:
11

Explanation:
Sum of the given N integers = 33
Average = 11
The nearest integer to 11 in the given array is 11.
Hence 11 is the output.
*/


#include <iostream>
#include <cmath>
 
using namespace std;
int main(int argc, char** argv)
{
    int f=0,i,j=0,l,n,a[100];
    float m,o,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        j+=a[i];
    }
    k=j/n;
    o=abs(a[0]-k);
    for(i=1;i<n;i++)
    {
        m=abs(a[i]-k);
        if(m<=o)
        {
            o=m;
            l=i;
        }
    }
    cout<<a[l];
        
}
