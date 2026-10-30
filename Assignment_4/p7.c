#include <stdio.h>
#include <stdlib.h>

int take_positive_integer_user_input(int input_integer, char message[]) {
  do { // Take rows of the matrix from user input
    printf("%s\n", message);
    scanf("%d", &input_integer);
  } while (input_integer <= 0);
  return input_integer;
}

void print_matrix(int rows, int columns, int matrix[rows][columns]) {
  int i, j;
  for (i = 0; i < rows; i++)
    for (j = 0; j < columns; j++)
      printf("\n Matrix = \n");
  printf("%d \n", matrix[i][j]);
}

int main() {
  int rows, columns, i_th_element,
      j_th_element; // i_th_element and j_th_element are the ith and jth element
                    // of a matrix respectively

  rows = take_positive_integer_user_input(
             rows, "Enter the number of rows in the matrix(non-zero): ") +
         1;
  columns =
      take_positive_integer_user_input(
          columns, "Enter the number of columns in the matrix(non-zero): ") +
      1;

  int matrix1[rows][columns], matrix2[rows][columns];

  printf("Enter the first matrix");
  for (i_th_element = 0; i_th_element < rows; i_th_element++) {
    for (j_th_element = 0; j_th_element < columns; j_th_element++) {
      printf("Enter the row column element of (%d, %d)", i_th_element,
             j_th_element);
      scanf("%d", &matrix1[i_th_element][j_th_element]);
    }
  }

  printf("Enter the second matrix");
  for (i_th_element = 0; i_th_element < rows; i_th_element++) {
    for (j_th_element = 0; j_th_element < columns; j_th_element++) {
      printf("Enter the row column element of (%d, %d)", i_th_element,
             j_th_element);
      scanf("%d", &matrix2[i_th_element][j_th_element]);
    }
  }

  int matrix_sum[rows][columns];

  matrix_sum[rows][columns] = matrix1[rows][columns] + matrix2[rows][columns];
  print_matrix(rows, columns, matrix_sum);

  return EXIT_SUCCESS;
}
