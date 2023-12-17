#include <algorithm>
#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

vector<int> score;
int main() {
  int N, ma = 101, mi = -1;
  cin >> N;
  score.resize(N);
  for (int &i : score) {
    cin >> i;
    if (i >= 60 && i < ma)
      ma = i;
    else if (i < 60 && i > mi)
      mi = i;
  }
  sort(score.begin(), score.end());
  for (int &i : score)
    cout << i << " ";

  cout << endl;

  if (mi != -1)
    cout << mi << endl;
  else
    cout << "best case" << endl;

  if (ma != 101)
    cout << ma << endl;
  else
    cout << "worst case" << endl;

  return 0;
}