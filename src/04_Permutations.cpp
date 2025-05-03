#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  if (n == 1) {
    std::cout << "1\n";
    return 0;
  }

  if (n == 2 || n == 3) {
    std::cout << "NO SOLUTION\n";
    return 0;
  }

  std::vector<int> beautiful_permutation;

  for (int i = 2; i <= n; i += 2) {
    beautiful_permutation.push_back(i);
  }

  for (int i = 1; i <= n; i += 2) {
    beautiful_permutation.push_back(i);
  }

  for (const int num : beautiful_permutation) {
    std::cout << num << " ";
  }

  std::cout << "\n";

  return 0;
}
