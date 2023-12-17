#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main() {
  int R, C, M, in;
  cin >> R >> C >> M;
  vector<vector<int>> ve, ans;
  for (int i = 0; i < R; i++) {
    vector<int> temp;
    for (int j = 0; j < C; j++) {
      cin >> in;
      temp.push_back(in);
    }
    ve.push_back(temp);
  }

  int op[M];
  for (int i = M - 1; i >= 0; i--)
    cin >> op[i];

  for (int o = 0; o < M; o++) {
    if (op[o] == 1) {
      for (int i = R - 1; i >= 0; i--) {
        vector<int> temp;
        for (int j = 0; j < C; j++) {
          temp.push_back(ve[i][j]);
        }
        ans.push_back(temp);
      }
    } else {
      for (int i = C - 1; i >= 0; i--) {
        vector<int> temp;
        for (int j = 0; j < R; j++) {
          temp.push_back(ve[j][i]);
        }
        ans.push_back(temp);
      }
      swap(R, C);
    }
    ve.clear();

    for (int i = 0; i < R; i++) {
      vector<int> temp;
      for (int j = 0; j < C; j++) {
        temp.push_back(ans[i][j]);
      }
      ve.push_back(temp);
    }
    ans.clear();
  }

  cout << R << " " << C << endl;
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cout << ve[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}