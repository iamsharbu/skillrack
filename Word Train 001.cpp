/*
Word Train 001
Note: not solved by me
N words are passed as input to the program. For N-1 words there will be another word which starts with it's last letter. The remaining one word (which does not have any other word starting with it's last letter must appear as the last word in the list). The program must print the words in the order so that a specific word is followed by the other word which starts with it's last letter.

Input Format:
The first line contains N.
Next N lines contain N words.

Output Format:
N lines containing N words in the desired order.

Boundary Conditions:
2 <= N <= 100

Example Input/Output 1:
Input:
4
niche
manager
lemon
emblem

Output:
lemon
niche
emblem
manager
*/

#include < iostream > 
#include < string >
  using namespace std;
int main() {
  int i, j, k, m, n, s, t, u = 0, v;
  string a[1000], str;
  char t1, t2;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      m = a[j].length();
      if (a[i][0] == a[j][m - 1]) {
        break;
      }
    }
    if (j == n) {
      str = a[i];
      m = a[i].length();
      cout << str;
      t1 = a[i][m - 1];
      u = 1;
    }
  }
  for (i = 0; i < n || u < n; i++) {
    m = a[i].length();
    if (a[i][0] == t1) {
      cout << endl << a[i];
      t1 = a[i][m - 1];
      u++;
      i = -1;
    }
  }
}
