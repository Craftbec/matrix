#include "s21_matrix.h"

int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  int out = 1;
  if (matrix_ok(A)) {
    out = 2;
    if (A->rows == A->columns) {
      double det = 0.0;
      s21_determinant(A, &det);
      if (fabs(det) > EPS) {
        matrix_t minor = {0};
        s21_calc_complements(A, &minor);
        matrix_t B = {0};
        s21_transpose(&minor, &B);
        s21_remove_matrix(&minor);
        s21_mult_number(&B, 1 / det, result);
        s21_remove_matrix(&B);
        out = 0;
      }
    }
  }
  return out;
}
