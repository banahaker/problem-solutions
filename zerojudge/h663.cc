#include <bits/stdc++.h>
using namespace std;

#define MAXN 20
#define INF 1e9

int N, conflict[MAXN][MAXN], dp[MAXN][1 << MAXN], path[MAXN][1 << MAXN];

int solve(int pos, int mask) {
  if (mask == (1 << N) - 1)
    return 0;
  if (dp[pos][mask] != -1)
    return dp[pos][mask];

  int ans = INF, idx = -1;
  for (int i = 0; i < N; i++) {
    if (!(mask & (1 << i))) {
      int res = conflict[pos][i] + solve(i, mask | (1 << i));
      if (res < ans) {
        ans = res;
        idx = i;
      }
    }
  }

  path[pos][mask] = idx;
  return dp[pos][mask] = ans;
}

void print_path(int pos, int mask) {
  if (mask == (1 << N) - 1)
    return;
  cout << " " << path[pos][mask] + 1;
  print_path(path[pos][mask], mask | (1 << path[pos][mask]));
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> conflict[i][j];
    }
  }

  memset(dp, -1, sizeof(dp));

  int ans = INF, idx = -1;
  for (int i = 0; i < N; i++) {
    int res = solve(i, 1 << i);
    if (res < ans) {
      ans = res;
      idx = i;
    }
  }

  cout << ans << "\n";
  cout << idx + 1;
  print_path(idx, 1 << idx);
  cout << "\n";

  return 0;
}

