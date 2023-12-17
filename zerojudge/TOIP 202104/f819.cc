#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> books;

int main() {
  int n, a, b, money = 0;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    if (b > 100) {
      money += (b - 100) * 5;
      books.push_back(a);
    }
  }
  if (books.size() > 0) {
    sort(books.begin(), books.end());
    for (int b : books) {
      cout << b << " ";
    }
    cout << '\n' << money << '\n';
  } else {
    cout << 0 << '\n';
  }
  return 0;
}