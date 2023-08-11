#include "s21_matrix.h"

int s21_calc_complements(matrix_t *A, matrix_t *result) {
  int out = 1;
  if (matrix_ok(A)) {
    out = 2;
    if (A->rows == A->columns) {
      if (!s21_create_matrix(A->rows, A->columns, result)) {
        for (int i = 0; i < A->rows; i++) {
          for (int j = 0; j < A->columns; j++) {
            matrix_t tmp = strikeout(A, i, j);
            double s = 0;
            s21_determinant(&tmp, &s);
            result->matrix[i][j] = pow(-1, i + j) * s;
            s21_remove_matrix(&tmp);
          }
        }
        out = 0;
      }
    }
  }
  return out;
}
