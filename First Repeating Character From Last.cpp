#include < iostream >
#include < string > using namespace std;
int main(int argc, char * * argv) {
  char a;
  string s;
  int n;
  getline(cin, s);
  n = s.length();
  for (int i = n - 1; i >= 0; i--)
    for (int j = i - 1; j >= 0; j--) {
      if (s[i] == s[j]) {
        cout << s[i];
        return 0;
      }
    }
}
