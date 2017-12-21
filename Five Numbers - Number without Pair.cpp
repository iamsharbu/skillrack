/*
Five Numbers - Number without Pair

Five numbers a,b,c,d,e are passed as input to the program. Among these 5 numbers, 2 pairs are present and one is without pair. Print that number without pair.

Input Format:
The first line contains a,b,c,d,e separated by a space.

Output Format:
The first line contains the number that does not have a pair.

Boundary Conditions:
1 <= a,b,c,d,e <= 99999

Example Input/Output 1:
Input:
44 54 88 44 54

Output:
88

Example Input/Output 2:
Input:
55 55 55 55 55

Output:
55

/*
#include <iostream>
 
using namespace std;
int main(int argc, char** argv){
  long int a[100000],b[100000];
  int i;
  for(i=0;i<5;i++){
      cin>>b[i];
      a[b[i]]++;
  }
  for(i=0;i<5;i++){
      if(a[b[i]]%2!=0){
          cout<<b[i]<<" "; break;
      }
   }
}
*/


