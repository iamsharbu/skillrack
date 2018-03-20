/*

N persons first anSort By Last Name First Name (Id-2962) Author: SKILLRACK 
Note: not done by me
d last names are passed as input. The program must sort them based on the last name. If the last names are same, then first name must be taken into account to sort.

Input Format:
The first line contains the value of N.
Next N lines contain the first name and the last name of N persons, with the values separated by a space.

Output Format:
N lines containing the N first and last names separated by a space (sorted by last name, first name)

Boundary Conditions:
2 <= N <= 15
Length of first and last name is between 2 and 50.

Example Input/Output 1:
Input:
7
Arul Prakash
Banu Govind
Abhijit Singh
Syed Siraj
George Joshua
Dhanraj Pillay
Bhagat Singh

Output:
Banu Govind
George Joshua
Dhanraj Pillay
Arul Prakash
Abhijit Singh
Bhagat Singh
Syed Siraj



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
