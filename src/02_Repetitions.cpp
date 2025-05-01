#include <algorithm>
#include <iostream>
#include <string>

int find_longest_repetition(const std::string &dna_sequence) {
  int max_length = 1, current_length = 1;

  for (size_t i = 1; i < dna_sequence.length(); ++i) {
    current_length =
        (dna_sequence[i] == dna_sequence[i - 1]) ? current_length + 1 : 1;
    max_length = std::max(max_length, current_length);
  }

  return max_length;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string dna_sequence;
  std::cin >> dna_sequence;

  std::cout << find_longest_repetition(dna_sequence) << '\n';
  return 0;
}
