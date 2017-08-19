/*
Print Odd Even Negative Integer Count (Id-3035)
Accept N integers and print the count of odd, even and negative integer count as the output.
Input Format:The first line contains N.The second line contains N integer values, separated 
by space
.Output Format:
	The first line contains the count of odd, even and negative integer count separated by a space.
Boundary Conditions:
	1 <= N <= 1000
Example Input/Output 1:
	Input:1078 20 4 -12 96 93 15 60 -58 22
	Output:2 6 2
Example Input/Output 
	2:Input:20-16 -32 87 79 -33 7 -8 87 63 25 84 39 -20 -12 84 98 8 28 22 74
	Output:7 7 6
*/

#include <stdio.h>
#define MAX_SIZE 1000 //Maximum size of the array
int main()
{
    int arr[MAX_SIZE];
    int i, N, even, odd,neg;
    /* Input size of the array */
    scanf("%d", &N);
    /* Input array elements */
    printf("Enter %d elements in array: ", N);
    for(i=0; i<N; i++)
	scanf("%d", &arr[i]);
   /* Assuming that there are 0 even and odd elements */
    even = 0;odd  = 0;neg  = 0;
    for(i=0; i<N; i++)
    {
        if(arr[i]<0)
		neg++;
	else
	{
		if(arr[i]%2 == 0)
		{
		    even++;
		}
		else
		{
		    odd++;
		}
	 }   
    }
    printf("%d %d %d", neg,odd,even);
    return 0;
}
