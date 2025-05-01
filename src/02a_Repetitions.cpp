#include <cstdio>

char input_sequence[1000009];

int main() {
  if (fgets(input_sequence, sizeof(input_sequence), stdin)) {
    int max_repetition = 0;
    int current_repetition = 0;
    int index = 1;

    while (input_sequence[index] != '\0') {
      if (input_sequence[index] == input_sequence[index - 1])
        current_repetition++;
      else
        current_repetition = 0;
      if (current_repetition > max_repetition)
        max_repetition = current_repetition;
      index++;
    }
    printf("%d\n", max_repetition + 1);
  }

  return 0;
}
