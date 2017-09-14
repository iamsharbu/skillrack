/*
Matrix Pattern Printing - First \ Last Higher

Given an integer N as the input, print the pattern as given in the Example Input/Output section.

Input Format:
The first line contains N.

Output Format:
N lines containing the desired pattern.

Boundary Conditions:
2 <= N <= 100

Example Input/Output 1:
Input:
3

Output:
1 1 1 2
3 2 2 2
3 3 3 4

*/

void printPattern(int n)
{ int k=1;
int i,j;
for(int i=0;i<n;i++)
{
    if(i%2==0)
    {
        for(int j=0;j<n;j++)
        printf("%d ",k);
        k++;
        printf("%d\n",k);
    }
    else{
        k++;
        printf("%d ",k);
        k--;
        for(int j=0;j<n;j++)
        printf("%d ",k);
        printf("\n");
        k++;
    }
}
}
int main()
{
    int N;
    scanf("%d",&N);
    printPattern(N);
}
