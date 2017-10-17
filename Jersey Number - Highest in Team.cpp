/*
Jersey Number - Highest in Team

In a school there are N students standing in a straight line.  Their Jersey numbers from left to right are passed as the input. The students are to be divided into teams of size T starting from left. First T students form Team 1, next T students form Team 2 and so on. If N is not divisible by T and say the remainder is R, the R students are distributed among the teams formed so far in a round robin fashion (starting from the first team) until the R students are assigned to one of the teams.

Once the teams are formed, the program must print the highest jersey number in each team.

Input Format:
The first line contains N.
The second line contains the jersey numbers of N students separated by a space.
The third line contains T.

Output Format:
The highest jersey number in each team separated by a space.

Boundary Conditions:
1 <= N <= 9999999

Example Input/Output 1:
Input:
10
1 5 8 2 4 11 20 6 7 9
5

Output:
8 20

Example Input/Output 2:
Input:
10
1 5 8 2 4 11 3 6 9 7
4

Output:
9 11
*/


#include < iostream >
 using namespace std;
int main(int argc, char * * argv) {
  int m, n, i, j, k, l;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> m;
  if (m > n) {
    j = 0;
    for (i = 0; i < n; i++)
      if (j < a[i])
        j = a[i];
    cout << j;
    return 0;

  }
  int b[n / m], x = 0;
  for (i = 0; i < n / m; i++)
    b[i] = 0;
  j = 0;
  for (i = 0; i < n - n % m; i++) {
    if (j < a[i]) j = a[i];
    if ((i + 1) % m == 0) {
      b[x] = j;
      j = 0;
      ++x;
    }
  }
  k = i;
  for (; i < n; i++) {
    j = (i - k) % (n / m);
    if (a[i] > b[j]) b[j] = a[i];
  }
  for (i = 0; i < x; i++)
    cout << b[i] << " ";
}
