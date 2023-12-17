#include <iostream>

using namespace std;

int main() {
  int n, a = 0;
  while (cin >> n && n != 0) {
    if (n == 1) {
      int d[5] = {4, 8, 7, 6, 3};
      string s[5] = {"Medium Wac", "WChicken Nugget", "Geez Burger",
                     "ButtMilk Crispy Chicken", "Plastic Toy"};
      int t;
      cin >> t;
      a += d[t - 1];
      cout << s[t - 1] << " " << d[t - 1] << endl;
    } else {
      int d[4] = {2, 3, 5, 7};
      string s[4] = {"German Fries", "Durian Slices", "WcFurry",
                     "Chocolate Sunday"};
      int t;
      cin >> t;
      a += d[t - 1];
      cout << s[t - 1] << " " << d[t - 1] << endl;
    }
  }
  cout << "Total: " << a << endl;

  return 0;
}