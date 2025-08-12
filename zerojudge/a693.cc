#include <iostream>
using namespace std;

int main() {
  int n, m, list[100005] = {0}, l, r, in_buff;
  while (cin >> n >> m) {
    list[0] = 0;
    for (int i = 1; i <= n; i++) {
      cin >> in_buff;
      list[i] = list[i - 1] + in_buff;
    }
    while (m--) {
      cin >> l >> r;
      cout << list[r] - list[l - 1] << endl;
    }
  }
}