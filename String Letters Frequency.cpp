/*
String Letters Frequency (Id-3105) 
Author: SKILLRACK 
A string value S containing N unique letters is passed as the input. 
The program must print the letters in the string based on the count of their occurrence. 
The letters of higher frequency of occurrence must appear first. 
If two letters have same frequency of occurrence then they are arranged as per alphabetical order. 

Input Format:
The first line contains S.

Output Format: N 
lines containing letters based on their frequency of occurrence. 

Boundary Conditions:
2 <= LENGTH(S) <= 10000 

Example Input/Output 1:

Input: 
MANAGEMENT 

Output: 
A2
E2
M2
N2
G1
T1

Example Input/Output 2: 

Input: 
ArrangemENt 

Output: 
r2
A1
E1
N1
a1
e1
g1
m1
n1
t1

*/
#include < iostream >
using namespace std;
int main(int argc, char * * argv) {
  string s;
  cin >> s;
  int n, i, j, k, l, a[26] = {
    0
  }, b[26] = {
    0
  }, max, m;
  char x;
  for (i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      k = s[i];
      a[k - 65]++;
    } else {
      k = s[i];
      b[k - 97]++;
    }
  }
  l = 0;
  m = 0;
  for (i = 0; i < 26; i++) {
    if (a[i] > l)
      l = a[i];
  }
  for (i = 0; i < 26; i++)
    if (b[i] > m)
      m = b[i];

  if (l > m) max = l;
  else max = m;
  for (i = max; i > 0; i--) {
    for (j = 0; j < 26; j++) {
      if (a[j] == i) {
        x = 65 + j;
        cout << x << a[j] << endl;
      }
    }
    for (j = 0; j < 26; j++) {
      if (b[j] == i) {
        x = 97 + j;
        cout << x << b[j] << endl;
      }
    }
  }
}
