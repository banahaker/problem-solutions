#include <iostream>
#include <ostream>

struct Node {
  int data;
  Node *left, *right;
};

Node *root, *current = root;

int main() {
  int n, data;
  std::cin >> n;
  while (n--) {
    std::cin >> data;
    current->data = data;
    current = current->left;
  }
  std::cout << "hello, world" << std::endl;
  return 0;
}
