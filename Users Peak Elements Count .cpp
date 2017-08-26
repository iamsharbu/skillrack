
/*
Program ID- 3051 
Users Peak Elements Count 
N integers are passed as input. The program must print the count of peak elements among the N integers. 
An element is a peak element if it is greater than it's neighbours (the elements to the left and right). 
The elements present in the extreme left and right can never be peak elements. Input Format: The first line 
contains N. The second line contains N integer values separated by a space. Output Format: The first line 
contains the count of peak elements.
Boundary Conditions: 
    2 <= N <= 1000
Example Input/Output 1:
    Input:
      5 1 2 3 1 3 
    Output:
      1 
Example Input/Output 2:
    Input: 
        5 1 2 3 4 5 
    Output: 
        0
*/
#include <iostream> 
using namespace std; 
int main(int argc, char** argv) {
  int n,a[10000] , r=0;
  cin>>n;
  for(int i=0;i<n;i++) {
      cin>>a[i];
      } 
  for(int i=1;i<n-1;i++) 
    {
      if(a[i-1]<a[i]&&a[i]>a[i+1]) 
      { r++; }
    }
  cout<<r; 
}
