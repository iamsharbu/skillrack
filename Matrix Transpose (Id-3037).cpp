/*
Matrix Transpose (Id-3037)
Given a matrix of R rows and C columns as the input,
the program must print the transpose of the input matrix. 
Input Format: The first line contains R and C separated by a space.
Output Format: C
lines containing R values each, 
with the values separated by a space.
Boundary Conditions: 1 <= R, C <= 1000
Example Input/Output 1: 
Input: 
4 3
62 9 88 72
81 31 3 99 
72 3 64 51 
Output:
62 72 3 
3 9 81 
99 64 88
31 72 51 
Example 
Input/Output 2: Input: 
3 3 
1 2 3 
4 5 6
7 8 9 
Output: 
1 4 7
2 5 8 
3 6 9
*/




#include<iostream>
using namespace std;
 
int main()
{
    int mat[1000][1000], trans_mat[1000][1000],m,n;
   cin>>m>>n;
    /* Initializing Mat1 and Mat2 */
    for (int i = 0; i < m; i++)
    { 
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];	
        }
    }
 
    /* Transposing elements of the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            trans_mat[j][i] = mat[i][j];	
        }
    }*/
  
    //direct printing tranpose if u want transpose consider above snippet
    cout << "Transpose of the Given nxn Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[j][i] << "\t";	
        }
        cout << endl;
    }
}
