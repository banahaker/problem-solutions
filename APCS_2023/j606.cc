#include <iostream>
#include <string>
#include <vector>
#define endl '\n'
using namespace std;

// O(qk)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<string> list(22);
  string in, temp;
  in.resize(22);
  temp.resize(22);
  int k, q, r, inn;
  cin >> k >> q >> r;
  cin >> in;
  for (string &s : list)
    s.resize(22);
  for (int i = 0; i < q; i++) {
    for (int j = 0; j < k; j++) {
      cin >> inn;
      list[inn - 1].push_back(in[j]);
      temp[inn - 1] = in[j];
    }
    in = temp;
  }
  for (int i = 0; i < r; i++) {
    cout << list[i] << endl;
  }
  return 0;
}