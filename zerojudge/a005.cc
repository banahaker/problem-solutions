#include <iostream>
using namespace std;

int main() {
  int n, arr[4];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    if (arr[1] - arr[0] == arr[2] - arr[1] &&
        arr[2] - arr[1] == arr[3] - arr[2]) {
      cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " "
           << arr[3] + arr[2] - arr[1] << endl;
    } else {
      cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " "
           << arr[3] * arr[2] / arr[1] << endl;
    }
  }

  return 0;
}