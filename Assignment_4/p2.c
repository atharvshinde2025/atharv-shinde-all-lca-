#include <stdio.h>
#include <stdlib.h>

int main() {

  int n, sum;
  printf(
      "Enter n for which this program will print the sum of first n numbers: ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  printf("%d", sum);

  return EXIT_SUCCESS;
}
