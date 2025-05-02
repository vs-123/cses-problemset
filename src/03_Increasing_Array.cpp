#include <algorithm>
#include <iostream>
#include <vector>

unsigned long solution(const std::vector<unsigned long> &arr) {
  unsigned long moves = 0;
  unsigned long previous = arr[0];

  for (auto &elem : arr) {
    if (elem < previous) {
      moves += previous - elem;
    } else {
      previous = elem;
    }
  }

  return moves;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  unsigned long n;
  std::cin >> n;

  std::vector<unsigned long> arr(n);
  for (unsigned long &element : arr) {
    std::cin >> element;
  }

  std::cout << solution(arr) << '\n';
  return 0;
}
