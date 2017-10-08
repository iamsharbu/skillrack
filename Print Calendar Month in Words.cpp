/*
Print Calendar Month in Words

The program must accept an integer value N and print the corresponding calendar month in words.
1 - January, 2 - February, .... , 11 - November, 12 - December

If any value apart from 1 to 12 is passed as input, the program must print "Invalid Input".

Input Format:
The first line denotes the value of N.

Output Format:
The first line contains the output as per the description. (The output is CASE SENSITIVE).

Boundary Conditions:
1 <= N <= 12

Example Input/Output 1:
Input:
5

Output:
May

Example Input/Output 2:
Input:
12

Output:
December

Example Input/Output 3:
Input:
105

Output:
Invalid Input

*/

#include <iostream>
 
using namespace std;
int main(int argc, char** argv)
{int s;
cin>>s;
switch(s){
    case 1:  cout<<"January";     break;
    case 2:  cout<<"February";    break;
    case 3:  cout<<"March";       break;
    case 4:  cout<<"April";       break;
    case 5:  cout<<"May";         break;
    case 6:  cout<<"June";        break;
    case 7:  cout<<"July";        break;
    case 8:  cout<<"August";      break;
    case 9:  cout<<"September";   break;
    case 10: cout<<"October";     break;
    case 11: cout<<"November";    break;
    case 12: cout<<"December";    break;
    default:cout<<"Invalid Input";break;
}
}

