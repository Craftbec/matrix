#include "s21_matrix.h"

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int out = FAILURE;
  if (matrix_ok(A) && matrix_ok(B)) {
    if (s21_eq(A, B)) {
      out = SUCCESS;
      for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
          if (fabs(A->matrix[i][j] - B->matrix[i][j]) > EPS) {
            out = FAILURE;
            break;
          }
        }
      }
    }
  }
  return out;
}
