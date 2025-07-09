#include <iostream>
#include <string>
using namespace std;

int main() {
  char c;
  while ((c = cin.get()) != '\n' && c != EOF) {
    cout << static_cast<char>(c - 7);
  }
  cout << endl;

  return 0;
}