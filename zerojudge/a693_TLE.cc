#include <iostream>
using namespace std;

int main() {
  int n, m, list[100005], l, r;
  while (cin >> n >> m) {
    for (int i = 0; i < n; i++)
      cin >> list[i];
    while (m--) {
      int ans = 0;
      cin >> l >> r;
      for (int i = l - 1; i < r; i++)
        ans += list[i];
      cout << ans << endl;
    }
  }
}