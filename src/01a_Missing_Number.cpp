#include <iostream>

char s[1 << 21];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  unsigned long n;
  std::cin >> n >> std::ws;
  n = n * (n + 1) >> 1;
  std::cin.getline(s, 1 << 21);

  int num = 0;
  for (int i = 0; s[i]; i++) {
    if (s[i] != ' ') {
      num = num * 10 + (s[i] - '0');
    } else {
      n -= num;
      num = 0;
    }
  }
  n -= num;

  std::cout << n;
}
