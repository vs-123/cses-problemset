#include <algorithm>
#include <iostream>
#include <numeric>
#include <ranges>
#include <vector>

unsigned long solution(const std::vector<unsigned long> &arr) {
  if (arr.size() < 2)
    return 0;

  return std::accumulate(
      arr.begin() + 1, arr.end(), 0ul,
      [first = arr.front()](unsigned long moves, unsigned long elem) mutable {
        moves += (elem < first) ? first - elem : 0ul;
        first = std::max(first, elem);
        return moves;
      });
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
