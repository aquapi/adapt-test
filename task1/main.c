#include <stdint.h>
#include <stdio.h>

int main() {
  long long input;
  scanf("Enter a number: %lld", &input);
  printf("%d", input % 12 == 0);

  return 0;
}
