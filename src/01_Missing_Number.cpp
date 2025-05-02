#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  unsigned long n;
  std::cin >> n;

  unsigned long rs = n * (n + 1) >> 1;
  unsigned long s = 0;

  while (n-- - 1) {
    unsigned long i;
    std::cin >> i;
    s += i;
  }

  std::cout << rs - s;

  return 0;
}
