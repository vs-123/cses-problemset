#include <iostream>

const int MOD = 1e9 + 7;

using ul = unsigned long;

ul power(ul base, ul exponent) {
  ul result = 1;
  base %= MOD;

  while (exponent) {
    if (exponent & 1) {
      result = (result * base) % MOD;
    }
    base = (base * base) % MOD;
    exponent >>= 1;
  }

  return result;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ul n;
  std::cin >> n;

  ul strings = power(2, n);
  std::cout << strings << '\n';

  return 0;
}

