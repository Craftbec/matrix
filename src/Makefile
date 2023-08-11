CC	=	gcc -Wall -Wextra -Werror -std=c11

SRC	= s21_calc_complements.c s21_create_matrix.c s21_determinant.c s21_eq_matrix.c \
	  s21_inverse_matrix.c s21_mult_matrix.c s21_mult_number.c s21_remove_matrix.c \
	  s21_sub_matrix.c s21_sum_matrix.c s21_transpose.c help.c


OBJ	=	$(SRC:%.c=%.o)

LIB =	s21_matrix.a

all: 	$(LIB) test

$(LIB):	$(OBJ)
		ar rc $(LIB) $^

%.o:	%.c s21_matrix.h
		$(CC) -c $<

test:
		$(CC) -lgcov -coverage test.c $(SRC) -lcheck -lm -lpthread -o test
		./test

lint:
		cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
		python3 ../materials/linters/cpplint.py --extensions=c *.c *.h

gcov_report: test
		lcov -t "test" -o test.info -c -d .
		genhtml -o test_output test.info
		@cd ./test_output ; open index.html

clean:
		rm -rf $(OBJ) $(LIB)
		rm -rf *.gcno *.gcda ./test
		rm -rf ./test_output/ test.info
		rm -rf test_leaks
		rm -rf CPPLINT.cfg
		rm -rf RESULT_VALGRIND.txt
		rm -rf test_leaks.dSYM


re: clean all

valgrind: s21_matrix.a
	$(CC) test.c s21_matrix.a -lcheck -o test_leaks
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=RESULT_VALGRIND.txt ./test_leaks

