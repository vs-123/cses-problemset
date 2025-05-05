#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int n;
  std::cin >> n;

  for (int k_int = 1; k_int <= n; ++k_int) {
    long long k = k_int, k_sq = k * k, total_ways = k_sq * (k_sq - 1) / 2;

    long long attacking_pairs = 0;
    if (k > 2) {
      attacking_pairs = 4LL * (k - 1) * (k - 2); 
    }

    long long non_attacking_ways = total_ways - attacking_pairs;

    std::cout << non_attacking_ways << "\n";
  }

  return 0;
}

