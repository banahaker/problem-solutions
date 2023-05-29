#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#define endl '\n'
#define int long long
using namespace std;

int parser(string s) {
  int ans, cur, num;
  stack<int> pn, tn;
  if (s[0] == 'f') {
    for (int i = 2; i < s.size(); i++) {
      if (s[i] == '(')
        cur++;
      else if (s[i] == ')')
        cur--;
      if ('0' <= s[i] || s[i] <= '9') {
        num = num * 10 + (s[i] - '0');
      }
    }
  }
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  getline(cin, s);
  cout << parser(s) << endl;
  return 0;
}