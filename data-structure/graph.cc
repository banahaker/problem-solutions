#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;

int main() {
  graph.resize(1001);
  int n, a, b;
  while (n--) {
    cin >> a >> b;
    graph[a].push_back(b);
  }
  return 0;
}
