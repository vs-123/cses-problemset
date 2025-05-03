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

  for (int i = 2; i <= n; i += 2) {
    std::cout << i << " ";
  }

  for (int i = 1; i <= n; i += 2) {
    std::cout << i << " ";
  }

  return 0;
}


