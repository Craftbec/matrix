#include "s21_matrix.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int out = 1;
  if ((rows > 0) && (columns > 0)) {
    result->columns = columns;
    result->rows = rows;
    result->matrix = calloc(rows, sizeof(double *));
    for (int i = 0; i < rows; i++) {
      result->matrix[i] = calloc(columns, sizeof(double));
    }
    out = 0;
  }
  return out;
}
