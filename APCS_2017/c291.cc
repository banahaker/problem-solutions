#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

vector<int> people;
vector<bool> visited;

void find(int c) {
  visited[c] = true;
  while (!visited[people[c]]) {
    c = people[c];
    visited[c] = true;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, ans = 0;
  cin >> N;
  people.resize(N);
  visited.assign(N, false);
  for (int &i : people)
    cin >> i;
  for (int i = 0; i < N; i++) {
    if (!visited[i]) {
      find(i);
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}