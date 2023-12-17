#include <iostream>
#define endl '\n'
using namespace std;

struct Point {
  int x, y;
};

// O(n)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, d = 0, right_turn = 0, left_turn = 0, re_turn = 0;
  Point cur, last = {0, 0};
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> cur.x >> cur.y;
    if (cur.x - last.x > 0) {
      if (d == -1) {
        re_turn++;
      } else if (d == 2) {
        right_turn++;
      } else if (d == -2) {
        left_turn++;
      }
      d = 1;
    } else if (cur.x - last.x < 0) {
      if (d == 1)
        re_turn++;
      else if (d == 2)
        left_turn++;
      else if (d == -2)
        right_turn++;
      d = -1;
    } else if (cur.y - last.y > 0) {
      if (d == -2)
        re_turn++;
      else if (d == 1)
        left_turn++;
      else if (d == -1)
        right_turn++;
      d = 2;
    } else {
      if (d == 2)
        re_turn++;
      else if (d == 1)
        right_turn++;
      else if (d == -1)
        left_turn++;
      d = -2;
    }
    last = cur;
  }
  cout << left_turn << " " << right_turn << " " << re_turn << endl;
  return 0;
}