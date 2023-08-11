
#include "s21_matrix.h"

void filling_matrix(matrix_t *result, double e) {
  for (int i = 0; i < result->rows; i++) {
    for (int j = 0; j < result->columns; j++) {
      result->matrix[i][j] = e;
    }
  }
}

int s21_eq(matrix_t *A, matrix_t *B) {
  int out = 0;
  if ((A->rows == B->rows) && (A->columns == B->columns)) {
    out = 1;
  }
  return out;
}

int matrix_ok(matrix_t *A) {
  int res = 0;
  if ((A != NULL) && (A->matrix != NULL) && (A->rows > 0) && (A->columns > 0)) {
    res = 1;
  }
  return res;
}

matrix_t strikeout(matrix_t *A, int irows, int jcolumns) {
  matrix_t tmp = {0};
  if (matrix_ok(A)) {
    if (!s21_create_matrix(A->rows - 1, A->columns - 1, &tmp)) {
      for (int i = 0, a = 0; i < A->rows; i++) {
        if (i != irows) {
          for (int j = 0, b = 0; j < A->columns; j++) {
            if (j != jcolumns) {
              tmp.matrix[a][b] = A->matrix[i][j];
              b++;
            }
          }
          a++;
        }
      }
    }
  }
  return tmp;
}
