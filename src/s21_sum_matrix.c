#include "s21_matrix.h"

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int out = 1;
  if (matrix_ok(A) && matrix_ok(B)) {
    out = 2;
    if (s21_eq(A, B)) {
      if (!s21_create_matrix(A->rows, A->columns, result)) {
        for (int i = 0; i < A->rows; i++) {
          for (int j = 0; j < A->columns; j++) {
            result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
          }
        }
        out = 0;
      }
    }
  }
  return out;
}
