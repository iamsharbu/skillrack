/*
Note: this code was not solved by me
Unique String Representations

Given a string S print the number of unique string values that can be formed by rearranging the letters in the string S.

Boundary Condition:
2 <= Length of S <= 22 

Input/Output Format:
Input:
First line contains the string S.

Output:
The value representing the number of unique string values that can be formed by rearranging the letters in the string S.

Example Input/Output 1:
Input:
abc

Output:
6

Example Input/Output 2:
Input:
apple

Output:
60
*/

#Your code below
import math
a=input()
n=len(a)
x=math.factorial(n)
b=set(a)
fa=1
for j in b:
    y=a.count(j)
    y=math.factorial(y)
    fa=fa*y
x=x/fa
print(int(x))


