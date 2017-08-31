/*
Complete Cell State After D Days

There is a colony of 8 cells arranged in a straight line where each day every cell competes with its adjacent cells(neighbours). Each day, for each cell, if it's neighbours are both active or both inactive, the cell becomes inactive the next day, otherwise it becomes active the next day.

The two cells at the ends have only single adjacent cell, so the other imaginary adjacent cell can be assumed to be always inactive.

On a given day, even after updating the cell state, consider it's previous day's state for updating the state of other cells.

Complete the function cellComplete which takes an 8 element array of integer cells representing the current state of 8 cells and an integer D days representing the number of days to simulate.

An integer value of 1 represents an active cell and value of 0 represents an inactive cell.

Input Format:
The first line contains 8 integer values representing the initial state of the cells.
The second line contains D - which represents the number of days.

Output Format:
The first line contains the state of the cells after D days.

Boundary Conditions:
1 <= D <= 1000

Example Input/Output 1:
Input:
1 0 0 0 0 1 0 0
3

Output:
0 0 1 1 1 0 1 0

Example Input/Output 2:
Input:
1 0 0 0 0 1 0 0
2

Output:
1 0 1 1 0 0 0 1

 */

import java.util.*;
 
public class Hello{
 
    final static int CELLCOUNT = 8;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cells[] = new int[CELLCOUNT];
        for(int index=0; index < CELLCOUNT; index++){
            cells[index]=sc.nextInt();
        }
        int daysToProcess = sc.nextInt();
        cells = cellComplete(cells, daysToProcess);
         
        for(int index=0; index < CELLCOUNT; index++){
            System.out.print(cells[index] + " ");
        }
    }

static int[] cellComplete(int c[], int n){
    int i,j;
    int[] a=new int[10];
    a[0]=0;a[9]=0;
    for(i=1;i<9;i++)
    a[i]=c[i-1];
    for(j=1;j<=n;j++)
    {
        for(i=1;i<9;i++)
        {
            if(a[i-1]==a[i+1])
            c[i-1]=0;
            else
            c[i-1]=1;
        }
        for(i=1;i<9;i++)
        a[i]=c[i-1];
  }
  return c;
  }
}//End of Hello Class
