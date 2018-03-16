"""

note : not done by me
Series Team Score

Two soccer teams A and B play a series of matches over a period of time. In a match, the winning team gets 3 points. If the match ends in a tie (draw) with both teams scoring same goals, then both the teams get one point each. The losing team does not get any point.

The program must accept the goals scored by both team A and B in certain number of matches and print the cumulative scores of team A and B separated by a space.

Input Format:
First line will contain the goals scored by team A, with the goal values separated by a space.
Second line will contain the goals scored by team B, with the goal values separated by a space.

Output Format:
First line will contain the scores of team A and B separated by a space.

Boundary Conditions:
The length of the input with the space separated goals is from 3 to 100.

Example Input/Output 1:
Input:
3 5 1
3 2 0

Output:
7 1

Explanation:
Team A drew the first match and hence both team A and B got one point each.
Team A won both matches two and three and hence got additional 6 points.
So the final score of team A is 7 and team B is 1.
"""

#Your code below
a=input().split()
b=input().split()
a=[int(i)for i in a]
b=[int(i)for i in b]
x=0
y=0
for i in range(0,len(a)):
    if a[i]>b[i]:
        x+=3
    if a[i]<b[i]:
        y+=3
    if a[i]==b[i]:
        x+=1
        y+=1
print(x,y)
