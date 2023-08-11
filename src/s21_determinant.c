#include "s21_matrix.h"

int s21_determinant(matrix_t *A, double *result) {
  int out = 1;
  if (matrix_ok(A)) {
    out = 2;
    if (A->rows == A->columns) {
      *result = 0;
      if (A->rows == 1) {
        *result = A->matrix[0][0];
      } else if (A->rows == 2) {
        *result = (A->matrix[0][0] * A->matrix[1][1]) -
                  (A->matrix[0][1] * A->matrix[1][0]);
      } else {
        for (int i = 0; i < A->rows; i++) {
          matrix_t temp = strikeout(A, i, 0);
          double s = 0;
          s21_determinant(&temp, &s);
          *result += A->matrix[i][0] * s * pow(-1, i);
          s21_remove_matrix(&temp);
        }
      }
      out = 0;
    }
  }
  return out;
}
