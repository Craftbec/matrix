#include "s21_matrix.h"

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int out = 1;
  if (matrix_ok(A) && matrix_ok(B)) {
    out = 2;
    if (A->columns == B->rows) {
      if (!s21_create_matrix(A->rows, B->columns, result)) {
        for (int i = 0; i < result->rows; i++) {
          for (int j = 0; j < result->columns; j++) {
            double a = 0;
            for (int k = 0; k < A->columns; k++) {
              a += A->matrix[i][k] * B->matrix[k][j];
            }
            result->matrix[i][j] = a;
          }
        }
        out = 0;
      }
    }
  }
  return out;
}
