#include <cmath>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#define endl '\n'
using namespace std;

struct Loop {
  int head = -1;
  long long times;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  long long times = 1, total = 0;
  int last = 10;
  stack<Loop> lps;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'L') {
      int t = (int)(s[i + 1] - '0');
      lps.push(Loop{-1, t});
      i += 1;
    } else if (s[i] == 'E') {
      int t = lps.top().times;
      int head = lps.top().head;
      times /= t;
      total += abs(last - head) * (t - 1) * times;
      lps.pop();
    } else if (s[i] == 'T') {
      int cur = stoi(s.substr(i + 1, 2));
      stack<Loop> temp;
      total += abs(cur - last) * times;
      while (!lps.empty() && lps.top().head == -1) {
        temp.push(Loop{cur, lps.top().times});
        times *= lps.top().times;
        lps.pop();
      }
      while (!temp.empty()) {
        lps.push(temp.top());
        temp.pop();
      }

      last = cur;
      i += 2;
    }
  }

  cout << total << endl;

  return 0;
}
