/*
Head Count - Birds and Animals

In a zoo there are some birds and animals. All birds have two legs and all animals have four legs.
GIven the head count and leg count of both birds and animals taken together, the program must print the head count of birds and animals separated by a space as output.

Input Format:
First line will contain the integer value H representing the head count of both birds and animals taken together.
Second line will contain the integer value L representing the leg count of both birds and animals taken together.

Output Format:
First line will contain the integer values of the head count of birds and animals separated by a space.

Constraints:
0 < H < 1000
1 < L < 2000

Sample Input/Output:

Example 1:
Input:
27
84

Output:
12 15

Explanation:
There are 12 birds and 15 animals.

Example 2:
Input:
114
256

Output:
100 14

Explanation:
There are 100 birds and 14 animals.
*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv)
{
int a,b,k=1,n;
cin>>a>>b;
n=a-1;
while(k<a&&n>0)
{
    if((k*2)+(n*4)==b)
    break;
    k++;n--;
}
cout<<k<<" "<<n;
}

