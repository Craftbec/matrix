#include <check.h>

#include "s21_matrix.h"

START_TEST(s21_eq_matrix_0) {
  matrix_t A = {0};
  s21_create_matrix(8, 8, &A);
  matrix_t B = {0};
  s21_create_matrix(8, 8, &B);
  filling_matrix(&A, 1.5);
  filling_matrix(&B, 1.5);
  ck_assert_int_eq(1, s21_eq_matrix(&A, &B));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_eq_matrix_1) {
  matrix_t A = {0};
  s21_create_matrix(7, 7, &A);
  matrix_t B = {0};
  s21_create_matrix(8, 8, &B);
  filling_matrix(&A, 1.5);
  filling_matrix(&B, 1.5);
  ck_assert_int_eq(0, s21_eq_matrix(&A, &B));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_eq_matrix_2) {
  matrix_t A = {0};
  s21_create_matrix(8, 8, &A);
  matrix_t B = {0};
  s21_create_matrix(8, 8, &B);
  filling_matrix(&A, 2.5);
  filling_matrix(&B, 1.5);
  ck_assert_int_eq(0, s21_eq_matrix(&A, &B));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_eq_matrix_3) {
  matrix_t A = {0};
  s21_create_matrix(8, 8, &A);
  matrix_t B = {0};
  s21_create_matrix(2, 2, &B);
  filling_matrix(&A, 1.5);
  filling_matrix(&B, 1.5);
  ck_assert_int_eq(0, s21_eq_matrix(&A, &B));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_sum_matrix_0) {
  matrix_t A = {0};
  s21_create_matrix(8, 8, &A);
  matrix_t B = {0};
  matrix_t C = {0};
  s21_create_matrix(8, 8, &B);
  filling_matrix(&A, 1.5);
  filling_matrix(&B, 2.5);
  ck_assert_int_eq(0, s21_sum_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_sum_matrix_1) {
  matrix_t A = {0};
  s21_create_matrix(8, 8, &A);
  matrix_t B = {0};
  matrix_t C = {0};
  s21_create_matrix(4, 4, &B);
  filling_matrix(&A, 1.5);
  filling_matrix(&B, 2.5);
  ck_assert_int_eq(2, s21_sum_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_sum_matrix_2) {
  matrix_t *A = NULL;
  matrix_t B = {0};
  matrix_t C = {0};
  s21_create_matrix(4, 4, &B);
  filling_matrix(&B, 2.5);
  ck_assert_int_eq(1, s21_sum_matrix(A, &B, &C));
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_sum_matrix_3) {
  matrix_t *B = NULL;
  matrix_t A = {0};
  matrix_t C = {0};
  s21_create_matrix(4, 4, &A);
  filling_matrix(&A, 2.5);
  ck_assert_int_eq(1, s21_sum_matrix(&A, B, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_sum_matrix_4) {
  matrix_t A = {0};
  s21_create_matrix(8, 8, &A);
  matrix_t B = {0};
  matrix_t C = {0};
  s21_create_matrix(5, 8, &B);
  filling_matrix(&A, 1.5);
  filling_matrix(&B, 2.5);
  ck_assert_int_eq(2, s21_sum_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_sub_matrix_0) {
  matrix_t A = {0};
  s21_create_matrix(8, 8, &A);
  matrix_t B = {0};
  matrix_t C = {0};
  s21_create_matrix(8, 8, &B);
  filling_matrix(&A, 1.5);
  filling_matrix(&B, 2.5);
  ck_assert_int_eq(0, s21_sub_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_sub_matrix_1) {
  matrix_t A = {0};
  s21_create_matrix(8, 8, &A);
  matrix_t B = {0};
  matrix_t C = {0};
  s21_create_matrix(4, 4, &B);
  filling_matrix(&A, 1.5);
  filling_matrix(&B, 2.5);
  ck_assert_int_eq(2, s21_sub_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_sub_matrix_2) {
  matrix_t *A = NULL;
  matrix_t B = {0};
  matrix_t C = {0};
  s21_create_matrix(4, 4, &B);
  filling_matrix(&B, 2.5);
  ck_assert_int_eq(1, s21_sub_matrix(A, &B, &C));
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_sub_matrix_3) {
  matrix_t *B = NULL;
  matrix_t A = {0};
  matrix_t C = {0};
  s21_create_matrix(4, 4, &A);
  filling_matrix(&A, 2.5);
  ck_assert_int_eq(1, s21_sub_matrix(&A, B, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_sub_matrix_4) {
  matrix_t A = {0};
  s21_create_matrix(8, 8, &A);
  matrix_t B = {0};
  matrix_t C = {0};
  s21_create_matrix(5, 8, &B);
  filling_matrix(&A, 1.5);
  filling_matrix(&B, 2.5);
  ck_assert_int_eq(2, s21_sub_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_mult_number_0) {
  matrix_t A = {0};
  double B = 3.4;
  s21_create_matrix(8, 8, &A);
  matrix_t C = {0};
  filling_matrix(&A, 1.5);
  ck_assert_int_eq(0, s21_mult_number(&A, B, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_mult_number_1) {
  matrix_t *A = NULL;
  double B = 3.4;
  matrix_t C = {0};
  ck_assert_int_eq(1, s21_mult_number(A, B, &C));
}
END_TEST

START_TEST(s21_mult_number_2) {
  matrix_t A = {0};
  double B = -3.4;
  s21_create_matrix(8, 8, &A);
  matrix_t C = {0};
  filling_matrix(&A, 1.5);
  ck_assert_int_eq(0, s21_mult_number(&A, B, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_mult_number_3) {
  matrix_t A = {0};
  double B = 158;
  s21_create_matrix(8, 4, &A);
  matrix_t C = {0};
  filling_matrix(&A, 1.5);
  ck_assert_int_eq(0, s21_mult_number(&A, B, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_mult_matrix_0) {
  matrix_t A = {0};
  matrix_t B = {0};
  s21_create_matrix(8, 4, &A);
  s21_create_matrix(4, 8, &B);
  matrix_t C = {0};
  filling_matrix(&A, 23.4);
  filling_matrix(&B, 4);
  ck_assert_int_eq(0, s21_mult_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_mult_matrix_1) {
  matrix_t A = {0};
  matrix_t B = {0};
  s21_create_matrix(80, 4, &A);
  s21_create_matrix(4, 29, &B);
  matrix_t C = {0};
  filling_matrix(&A, 223.4);
  filling_matrix(&B, -4.3);
  ck_assert_int_eq(0, s21_mult_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_mult_matrix_2) {
  matrix_t A = {0};
  matrix_t B = {0};
  s21_create_matrix(30, 30, &A);
  s21_create_matrix(30, 30, &B);
  matrix_t C = {0};
  filling_matrix(&A, -23.4);
  filling_matrix(&B, 34);
  ck_assert_int_eq(0, s21_mult_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_mult_matrix_3) {
  matrix_t A = {0};
  matrix_t B = {0};
  s21_create_matrix(30, 15, &A);
  s21_create_matrix(30, 15, &B);
  matrix_t C = {0};
  filling_matrix(&A, 23.4);
  filling_matrix(&B, 4);
  ck_assert_int_eq(2, s21_mult_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_mult_matrix_4) {
  matrix_t A = {0};
  matrix_t B = {0};
  s21_create_matrix(30, 15, &A);
  s21_create_matrix(16, 15, &B);
  matrix_t C = {0};
  filling_matrix(&A, 23.4);
  filling_matrix(&B, 4);
  ck_assert_int_eq(2, s21_mult_matrix(&A, &B, &C));
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_mult_matrix_5) {
  matrix_t *A = NULL;
  matrix_t B = {0};
  s21_create_matrix(16, 15, &B);
  matrix_t C = {0};
  filling_matrix(&B, 4);
  ck_assert_int_eq(1, s21_mult_matrix(A, &B, &C));
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(s21_mult_matrix_6) {
  matrix_t A = {0};
  matrix_t *B = NULL;
  s21_create_matrix(30, 15, &A);
  matrix_t C = {0};
  filling_matrix(&A, -4);
  ck_assert_int_eq(1, s21_mult_matrix(&A, B, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_transpose_0) {
  matrix_t *A = NULL;
  matrix_t C = {0};
  ck_assert_int_eq(1, s21_transpose(A, &C));
}
END_TEST

START_TEST(s21_transpose_1) {
  matrix_t A = {0};
  s21_create_matrix(30, 15, &A);
  matrix_t C = {0};
  filling_matrix(&A, 124);
  ck_assert_int_eq(0, s21_transpose(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_transpose_2) {
  matrix_t A = {0};
  s21_create_matrix(30, 15, &A);
  matrix_t C = {0};
  double s = 1.5;
  filling_matrix(&A, s);
  ck_assert_int_eq(0, s21_transpose(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_calc_complements_0) {
  matrix_t A = {0};
  s21_create_matrix(1, 1, &A);
  matrix_t C = {0};
  double s = 1.5;
  filling_matrix(&A, s);
  ck_assert_int_eq(0, s21_calc_complements(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_calc_complements_1) {
  matrix_t A = {0};
  s21_create_matrix(2, 2, &A);
  matrix_t C = {0};
  double s = 2.0;
  filling_matrix(&A, s);
  ck_assert_int_eq(0, s21_calc_complements(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_calc_complements_2) {
  matrix_t A = {0};
  s21_create_matrix(3, 3, &A);
  matrix_t C = {0};
  double s = 5.0;
  filling_matrix(&A, s);
  ck_assert_int_eq(0, s21_calc_complements(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_calc_complements_3) {
  matrix_t A = {0};
  s21_create_matrix(4, 4, &A);
  matrix_t C = {0};
  double s = -82.0;
  filling_matrix(&A, s);
  ck_assert_int_eq(0, s21_calc_complements(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_calc_complements_4) {
  matrix_t A = {0};
  s21_create_matrix(4, 4, &A);
  matrix_t C = {0};
  filling_matrix(&A, 123);
  ck_assert_int_eq(0, s21_calc_complements(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_calc_complements_5) {
  matrix_t A = {0};
  s21_create_matrix(3, 4, &A);
  matrix_t C = {0};
  double s = -82.0;
  filling_matrix(&A, s);
  ck_assert_int_eq(2, s21_calc_complements(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_calc_complements_6) {
  matrix_t A = {0};
  s21_create_matrix(6, 4, &A);
  matrix_t C = {0};
  filling_matrix(&A, 4);
  ck_assert_int_eq(2, s21_calc_complements(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_calc_complements_7) {
  matrix_t *A = NULL;
  matrix_t C = {0};
  ck_assert_int_eq(1, s21_calc_complements(A, &C));
}
END_TEST

START_TEST(s21_determinant_0) {
  matrix_t *A = NULL;
  double C;
  ck_assert_int_eq(1, s21_determinant(A, &C));
}
END_TEST

START_TEST(s21_determinant_1) {
  matrix_t A = {0};
  s21_create_matrix(1, 1, &A);
  double C;
  filling_matrix(&A, 14);
  ck_assert_int_eq(0, s21_determinant(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_determinant_2) {
  matrix_t A = {0};
  s21_create_matrix(1, 1, &A);
  double C;
  filling_matrix(&A, 74);
  ck_assert_int_eq(0, s21_determinant(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_determinant_3) {
  matrix_t A = {0};
  s21_create_matrix(2, 2, &A);
  double C;
  filling_matrix(&A, 44);
  ck_assert_int_eq(0, s21_determinant(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_determinant_4) {
  matrix_t A = {0};
  s21_create_matrix(3, 3, &A);
  double C;
  filling_matrix(&A, 24);
  ck_assert_int_eq(0, s21_determinant(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_determinant_5) {
  matrix_t A = {0};
  s21_create_matrix(5, 3, &A);
  double C;
  filling_matrix(&A, -4);
  ck_assert_int_eq(2, s21_determinant(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_determinant_6) {
  matrix_t A = {0};
  s21_create_matrix(3, 5, &A);
  double C;
  filling_matrix(&A, 2);
  ck_assert_int_eq(2, s21_determinant(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_inverse_matrix_0) {
  matrix_t A = {0};
  s21_create_matrix(4, 4, &A);
  matrix_t C = {0};
  filling_matrix(&A, 23);
  ck_assert_int_eq(2, s21_inverse_matrix(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_inverse_matrix_1) {
  matrix_t A = {0};
  s21_create_matrix(3, 4, &A);
  matrix_t C = {0};
  double s = -82.0;
  filling_matrix(&A, s);
  ck_assert_int_eq(2, s21_inverse_matrix(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_inverse_matrix_2) {
  matrix_t A = {0};
  s21_create_matrix(6, 4, &A);
  matrix_t C = {0};
  filling_matrix(&A, 4);
  ck_assert_int_eq(2, s21_inverse_matrix(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(s21_inverse_matrix_3) {
  matrix_t *A = NULL;
  matrix_t C = {0};
  ck_assert_int_eq(1, s21_inverse_matrix(A, &C));
}
END_TEST

START_TEST(s21_inverse_matrix_4) {
  matrix_t A = {0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 2;
  A.matrix[0][1] = 5;
  A.matrix[0][2] = 7;

  A.matrix[1][0] = 6;
  A.matrix[1][1] = 3;
  A.matrix[1][2] = 4;

  A.matrix[2][0] = 5;
  A.matrix[2][1] = -2;
  A.matrix[2][2] = -3;
  matrix_t C = {0};
  ck_assert_int_eq(0, s21_inverse_matrix(&A, &C));
  s21_remove_matrix(&A);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, s21_eq_matrix_0);  // s21_eq_matrix
  tcase_add_test(tc1_1, s21_eq_matrix_1);
  tcase_add_test(tc1_1, s21_eq_matrix_2);
  tcase_add_test(tc1_1, s21_eq_matrix_3);
  tcase_add_test(tc1_1, s21_sum_matrix_0);  // s21_sum_matrix
  tcase_add_test(tc1_1, s21_sum_matrix_1);
  tcase_add_test(tc1_1, s21_sum_matrix_2);
  tcase_add_test(tc1_1, s21_sum_matrix_3);
  tcase_add_test(tc1_1, s21_sum_matrix_4);
  tcase_add_test(tc1_1, s21_sub_matrix_0);  // s21_sub_matrix
  tcase_add_test(tc1_1, s21_sub_matrix_1);
  tcase_add_test(tc1_1, s21_sub_matrix_2);
  tcase_add_test(tc1_1, s21_sub_matrix_3);
  tcase_add_test(tc1_1, s21_sub_matrix_4);
  tcase_add_test(tc1_1, s21_mult_number_0);  // s21_mult_number
  tcase_add_test(tc1_1, s21_mult_number_1);
  tcase_add_test(tc1_1, s21_mult_number_2);
  tcase_add_test(tc1_1, s21_mult_number_3);
  tcase_add_test(tc1_1, s21_mult_matrix_0);  //  s21_mult_matrix
  tcase_add_test(tc1_1, s21_mult_matrix_1);
  tcase_add_test(tc1_1, s21_mult_matrix_2);
  tcase_add_test(tc1_1, s21_mult_matrix_3);
  tcase_add_test(tc1_1, s21_mult_matrix_4);
  tcase_add_test(tc1_1, s21_mult_matrix_5);
  tcase_add_test(tc1_1, s21_mult_matrix_6);
  tcase_add_test(tc1_1, s21_transpose_0);  //  s21_transpose
  tcase_add_test(tc1_1, s21_transpose_1);
  tcase_add_test(tc1_1, s21_transpose_2);
  tcase_add_test(tc1_1, s21_calc_complements_0);  //  s21_calc_complements
  tcase_add_test(tc1_1, s21_calc_complements_1);
  tcase_add_test(tc1_1, s21_calc_complements_2);
  tcase_add_test(tc1_1, s21_calc_complements_3);
  tcase_add_test(tc1_1, s21_calc_complements_4);
  tcase_add_test(tc1_1, s21_calc_complements_5);
  tcase_add_test(tc1_1, s21_calc_complements_6);
  tcase_add_test(tc1_1, s21_calc_complements_7);
  tcase_add_test(tc1_1, s21_determinant_0);  // s21_determinant
  tcase_add_test(tc1_1, s21_determinant_1);
  tcase_add_test(tc1_1, s21_determinant_2);
  tcase_add_test(tc1_1, s21_determinant_3);
  tcase_add_test(tc1_1, s21_determinant_4);
  tcase_add_test(tc1_1, s21_determinant_5);
  tcase_add_test(tc1_1, s21_determinant_6);
  tcase_add_test(tc1_1, s21_inverse_matrix_0);  //  s21_inverse_matrix
  tcase_add_test(tc1_1, s21_inverse_matrix_1);
  tcase_add_test(tc1_1, s21_inverse_matrix_2);
  tcase_add_test(tc1_1, s21_inverse_matrix_3);
  tcase_add_test(tc1_1, s21_inverse_matrix_4);
  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
