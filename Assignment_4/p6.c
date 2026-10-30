#include <stdio.h>
#include <stdlib.h>

int main() {

  int choice;
  do {
    printf("Enter a choice:\n1) Print 'Hii mom!!'\n2) Exit\n Enter a choice (1 "
           ", 2, etc): ");
    scanf("%d", &choice);
    if (choice == 1) {
      printf("Hii mom!!");
    }
  } while (choice != 2);
  return EXIT_SUCCESS;
}
