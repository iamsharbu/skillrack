/*
Area of a Circle

The program must accept the diameter of the circle as a command line argument and print the area of the circle rounding it up to 2 decimal places.

Example Input/Output 1:
Input:
14

Output:
154.00

Example Input/Output 2:
Input:
14.42

Output:
163.38

Example Input/Output 3:
Input:
1

Output:
0.79
Note : the language specified is :. TCS
*/

#include<stdio.h>
#include<stdlib.h>
int main(int args,char* argv[]){
    float d,a;
    d=atof(argv[1]);
    a=(22*d*d)/28; // a=(22*d*d)/7;
    printf("%.2f",a);
    return 0;
}


