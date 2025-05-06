#include <iostream>
#include <vector>
#include <numeric>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  int n;
  std::cin >> n;

  long long total_sum = (long long)n * (n + 1) / 2;

  if (total_sum % 2 != 0) {
    std::cout << "NO\n";
    return 0;
  } else {
    std::cout << "YES\n";

    long long target_sum = total_sum / 2;

    std::vector<int> set_a;
    std::vector<int> set_b;

    long long current_sum_a = 0;

    for (int i = n; i >= 1; --i) {
      if (current_sum_a + i <= target_sum) {
        set_a.push_back(i);
        current_sum_a += i;
      } else {
        set_b.push_back(i);
      }
    }

    std::cout << set_a.size() << "\n";
    for (size_t j = 0; j < set_a.size(); ++j) {
      std::cout << set_a[j] << (j == set_a.size() - 1 ? "" : " ");
    }
    std::cout << "\n";
    std::cout << set_b.size() << "\n";
    for (size_t j = 0; j < set_b.size(); ++j) {
      std::cout << set_b[j] << (j == set_b.size() - 1 ? "" : " ");
    }
    std::cout << "\n";
  }

  return 0;
}

