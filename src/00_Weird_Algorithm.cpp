#include <iostream>

int main() {
  unsigned long n;
  std::cin >> n;

  while (n != 1) {
    std::cout << n << " ";
    n = (n & 1) ? n * 3 + 1 : n >> 1;
  }
  std::cout << 1;

  return 0;
}