#include <iostream>
#include <vector>
using namespace std;

struct Point {
  int x, y;
};

// O(n^2m^2)

vector<Point> special_point;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m, arr[51][51], sum;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum = 0;
      int cur = arr[i][j];
      for (int k = 0; k < n; k++) {
        for (int c = 0; c < m; c++) {
          if (abs(k - i) + abs(c - j) <= cur) {
            sum += arr[k][c];
          }
        }
      }
      if (sum % 10 == cur)
        special_point.push_back(Point{i, j});
    }
  }

  cout << special_point.size() << endl;
  for (Point i : special_point) {
    cout << i.x << " " << i.y << endl;
  }
  return 0;
}