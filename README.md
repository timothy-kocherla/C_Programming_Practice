# C Programming Practice Programs

This repository contains **57 independent C programs** separated from the six uploaded source documents. Each `.c` file has its own `main()` function, so compile and run one program at a time.

## Contents

### 01–14: Basic arithmetic and digit manipulation\n\n- [`01_rectangle_area.c`](./01_rectangle_area.c) — Calculate the area of a rectangle.\n- [`02_square_plus_cube.c`](./02_square_plus_cube.c) — Find the square of the first number plus the cube of the second.\n- [`03_evaluate_quadratic_expression.c`](./03_evaluate_quadratic_expression.c) — Evaluate f(x) = ax^2 + bx + c for a supplied x.\n- [`04_delete_last_digit.c`](./04_delete_last_digit.c) — Remove the last decimal digit of an integer.\n- [`05_delete_last_two_digits.c`](./05_delete_last_two_digits.c) — Remove the last two decimal digits of an integer.\n- [`06_sum_last_two_digits.c`](./06_sum_last_two_digits.c) — Find the sum of the last two digits of an integer.\n- [`07_second_last_digit.c`](./07_second_last_digit.c) — Print the second-last digit of an integer.\n- [`08_double_last_digit.c`](./08_double_last_digit.c) — Add the last digit to the original integer (doubling its last digit's contribution).\n- [`09_delete_second_last_digit.c`](./09_delete_second_last_digit.c) — Remove the second-last digit from an integer.\n- [`10_swap_last_two_digits.c`](./10_swap_last_two_digits.c) — Exchange the last two digits of an integer.\n- [`11_double_second_last_digit.c`](./11_double_second_last_digit.c) — Double the second-last digit while leaving other digits unchanged.\n- [`12_product_after_exchanging_last_digits.c`](./12_product_after_exchanging_last_digits.c) — Exchange the last digits of two integers, then calculate their product.\n- [`13_integer_division_arithmetic.c`](./13_integer_division_arithmetic.c) — Demonstrate integer division and the effect of expression evaluation.\n- [`14_square_area.c`](./14_square_area.c) — Calculate the area of a square from its side length.\n\n### 15–24: Conditional statements\n\n- [`15_largest_of_three.c`](./15_largest_of_three.c) — Find the largest of three integers.\n- [`16_largest_of_four.c`](./16_largest_of_four.c) — Find the largest of four floating-point numbers.\n- [`17_largest_of_two.c`](./17_largest_of_two.c) — Find the larger of two integers.\n- [`18_right_angled_triangle.c`](./18_right_angled_triangle.c) — Check whether three supplied positive sides form a right-angled triangle.\n- [`19_slope_of_line.c`](./19_slope_of_line.c) — Calculate the slope of ax + by + c = 0 and identify horizontal/vertical lines.\n- [`20_quadratic_roots.c`](./20_quadratic_roots.c) — Find real or complex roots of ax^2 + bx + c = 0.\n- [`21_outlier_among_three.c`](./21_outlier_among_three.c) — When two of three integers are equal, print the different one.\n- [`22_search_value_in_four.c`](./22_search_value_in_four.c) — Check whether a value x is present among four integers.\n- [`23_count_matches_in_four.c`](./23_count_matches_in_four.c) — Count how many of four integers are equal to a fifth integer.\n- [`24_middle_of_three.c`](./24_middle_of_three.c) — Find the median (middle value) of three integers.\n\n### 25–30: Loops and sentinel-controlled input\n\n- [`25_count_numbers_greater_than_30.c`](./25_count_numbers_greater_than_30.c) — Read integers until -1 and count values greater than 30.\n- [`26_weighted_sum_until_minus_one.c`](./26_weighted_sum_until_minus_one.c) — Read integers until -1; add each value multiplied by its 1-based input position.\n- [`27_weighted_average_even_values.c`](./27_weighted_average_even_values.c) — Calculate the weighted average of even inputs, using their original 1-based positions as weights; -1 ends input.\n- [`28_weighted_sum_until_minus_one.c`](./28_weighted_sum_until_minus_one.c) — Read integers until -1 and display the running weighted sum (position starts at 1).\n- [`29_build_number_from_digits.c`](./29_build_number_from_digits.c) — Read non-negative single digits until -1 and concatenate them into an integer.\n- [`30_sum_until_n_sentinels.c`](./30_sum_until_n_sentinels.c) — Read values and sum non-sentinel inputs; stop after -1 has been entered a specified number of times.\n\n### 31–43: Functions and number/digit operations\n\n- [`31_sum_of_digits.c`](./31_sum_of_digits.c) — Find the sum of all decimal digits.\n- [`32_first_digit.c`](./32_first_digit.c) — Find the first (leftmost) digit of an integer.\n- [`33_second_digit.c`](./33_second_digit.c) — Find the second digit from the left.\n- [`34_sum_first_two_digits.c`](./34_sum_first_two_digits.c) — Find the sum of the first two digits from the left.\n- [`35_sum_even_digits.c`](./35_sum_even_digits.c) — Find the sum of all even digits in an integer.\n- [`36_rightmost_digit_multiple_of_three.c`](./36_rightmost_digit_multiple_of_three.c) — Find the rightmost digit that is divisible by 3 (including zero).\n- [`37_largest_digit.c`](./37_largest_digit.c) — Find the largest digit in an integer.\n- [`38_count_digits.c`](./38_count_digits.c) — Count the decimal digits in an integer.\n- [`39_count_digits_duplicate_exercise.c`](./39_count_digits_duplicate_exercise.c) — Second version of the digit-counting exercise, corrected to handle zero and negative numbers.\n- [`40_position_of_largest_digit.c`](./40_position_of_largest_digit.c) — Find the position of the largest digit, counting from the right starting at 1 (first occurrence).\n- [`41_swap_last_two_digits.c`](./41_swap_last_two_digits.c) — Swap the last two digits of a number (digit-manipulation function exercise).\n- [`42_rightmost_digit_multiple_of_two.c`](./42_rightmost_digit_multiple_of_two.c) — Find the rightmost even digit in an integer.\n- [`43_sum_between_two_numbers.c`](./43_sum_between_two_numbers.c) — Find the sum of integers strictly between two endpoints.\n\n### 44–51: Arrays\n\n- [`44_product_of_adjacent_sums.c`](./44_product_of_adjacent_sums.c) — Multiply the sums of each adjacent pair in an array. (Inferred from the repeated adjacent-pair multiplication in the source.)\n- [`45_sum_alternate_mirrored_products.c`](./45_sum_alternate_mirrored_products.c) — Sum products of mirrored array elements, taking every second element from the left.\n- [`46_sum_of_prefix_products.c`](./46_sum_of_prefix_products.c) — Calculate the sum of cumulative prefix products: a[0] + a[0]a[1] + ...\n- [`47_local_maxima_in_array.c`](./47_local_maxima_in_array.c) — Print interior array elements that are greater than both immediate neighbours.\n- [`48_position_of_first_even_element.c`](./48_position_of_first_even_element.c) — Print the 1-based position of the first even array element.\n- [`49_first_adjacent_even_pair.c`](./49_first_adjacent_even_pair.c) — Find the first pair of consecutive even elements and print the first element's 1-based position.\n- [`50_weighted_count_of_smaller_elements.c`](./50_weighted_count_of_smaller_elements.c) — For each element, count later elements smaller than it; sum element multiplied by that count.\n- [`51_weighted_following_smaller_run.c`](./51_weighted_following_smaller_run.c) — For each element, count the consecutive following elements smaller than it, stopping at the first element that is not smaller; sum element times that count.\n\n### 52–57: Recursion and character processing\n\n- [`52_recursive_even_position_characters.c`](./52_recursive_even_position_characters.c) — Read a line recursively and print characters at even 1-based positions.\n- [`53_recursive_odd_position_characters.c`](./53_recursive_odd_position_characters.c) — Read a line recursively and print characters at odd 1-based positions.\n- [`54_recursive_digits_in_reverse_order.c`](./54_recursive_digits_in_reverse_order.c) — Read a line recursively and print only its digits in reverse order.\n- [`55_recursive_digits_separated.c`](./55_recursive_digits_separated.c) — Read a line recursively and print its digits separated by spaces.\n- [`56_decimal_to_binary_recursion.c`](./56_decimal_to_binary_recursion.c) — Convert a non-negative integer to binary using recursion.\n- [`57_digits_to_binary_recursion.c`](./57_digits_to_binary_recursion.c) — Read a line and print the binary representation of each decimal digit using recursion.\n\n## Compile and run

You need GCC (or another C compiler) installed.

### Windows (MinGW GCC)

Open a terminal in this folder and run:

```bash
gcc 01_rectangle_area.c -o 01_rectangle_area
01_rectangle_area.exe
```

Replace the filename with the program you want to run.

### Linux / macOS

```bash
gcc -std=c11 01_rectangle_area.c -o 01_rectangle_area
./01_rectangle_area
```

For the quadratic-equation program, link the math library on systems where it is required:

```bash
gcc -std=c11 20_quadratic_roots.c -o 20_quadratic_roots -lm
```

## Corrections and notes

- Fixed missing return statements, undeclared variables, missing semicolons, incorrect format strings, and invalid `main` signatures.
- Fixed array boundary errors and incorrect loop bounds that could read beyond the array.
- Replaced accidental bitwise/logical operator misuse with the intended comparisons.
- Corrected the line-slope calculation and horizontal/vertical-line checks.
- Corrected quadratic-root calculations and output types.
- Added input checks and handling for values such as zero, negative integers, and missing digits where relevant.
- The original digit-counting exercise appeared twice; both versions are retained as separate practice files.
- Some array exercises had no written problem statement and contained out-of-bounds expressions. Their purpose was inferred from the code and is explicitly marked in the relevant filenames/descriptions. In particular, program 44 interprets the repeated adjacent-pair expression as the product of all adjacent-pair sums, and program 51 interprets the nested loop as a consecutive run of following smaller elements.
- The original recursive character-processing source combined several operations in one `main`. These have been separated into individual programs.

## Source documents

Programs were extracted from these six uploaded `.c` documents:
- `26mcce57(1).c`
- `26MCCE57 (1)(1).c`
- `26MCCE57 (2).c`
- `26MCCE57 (3).c`
- `26MCCE57 (4).c`
- `all.c`

All programs use standard C (C11-compatible). The code has been checked for successful compilation with GCC using `-std=c11 -Wall -Wextra -Wpedantic`. Runtime behavior still depends on the values entered by the user.
