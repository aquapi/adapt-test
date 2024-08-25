#include <stdio.h>

int main() {
  long long input;
  printf("Enter a number: ");
  scanf("%lld", &input);
  printf("%d", input % 12 == 0);

  return 0;
}
