/*
Reverse String - Vowels Retain Same Position (Id-2939) Author: SKILLRACK 

Given a string S1 as the input, the program must reverse the string, keeping the vowels in the same position.

Input Format:
The first line contains S1

Output Format:
The first line contains S1 reversed with vowels retaining the same position.

Boundary Conditions:
1 <= Length of S1 <= 1000

Example Input/Output 1:
Input:
abhcezjqu

Output:
aqjzechbu
*/


	#
	include < stdio.h >
  #include < string.h >
     int main() {
	    char a[1000];
	    scanf(, a);
	    int count = 0, i;
	    for (i = 0; i < strlen(a); i++) {
	      if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
	        count++;
	      }
	    }
	    int size = strlen(a) - count;
	    int s[size];
	    int j = 0;
	    for (int i = strlen(a) - 1; i >= 0; i--) {
	      if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
	        count++;
	      } else {
	        s[j] = a[i];

	        j++;
	      }
	    }

	    j = 0;
	    for (i = 0; i < strlen(a); i++) {
	      if (a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'i' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
	        printf( % c, a[i]);
	      } else {
	        printf( % c, s[j]);
	        j++;
	      }
	    }
	  }
