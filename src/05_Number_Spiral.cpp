#include <iostream>
#include <algorithm>
 
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
 
  int test_cases;
  std::cin >> test_cases;
 
  while (test_cases-- > 0) {
    long long row, col;
    std::cin >> row >> col;
 
    long long layer = std::max(row, col);
    long long layer_sq = layer * layer;
    long long prev_layer_sq = (layer - 1) * (layer - 1); 
    long long result;
 
    if (layer % 2 != 0) {
      if (col == layer) { 
        result = layer_sq - row + 1;
      } else { 
        result = prev_layer_sq + col;
      }
    } else {
      if (row == layer) { 
        result = layer_sq - col + 1;
      } else { 
        result = prev_layer_sq + row;
      }
    }
    std::cout << result << "\n";
  }
 
  return 0;
}

