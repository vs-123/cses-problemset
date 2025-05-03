#include <algorithm>
#include <iostream>
#include <numeric>
#include <ranges>
#include <vector>

unsigned long solution(const std::vector<unsigned long> &arr) {
  if (arr.empty())
    return 0;

  unsigned long previous = arr.front();
  return std::accumulate(arr.begin() + 1, arr.end(), 0ul,
                         [&](unsigned long moves, unsigned long elem) {
                           if (elem < previous) {
                             moves += previous - elem;
                           } else {
                             previous = elem;
                           }
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
