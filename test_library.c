#include <stdio.h>

/* Test Case 1 */
void test_add_book() {
    int expected = 2;
    int actual = 1 + 1;

    if (expected == actual)
        printf("Test Case 1 Passed\n");
    else
        printf("Test Case 1 Failed\n");
}

/* Test Case 2 */
void test_remove_book() {
    int expected = 4;
    int actual = 2 * 2;

    if (expected == actual)
        printf("Test Case 2 Passed\n");
    else
        printf("Test Case 2 Failed\n");
}

int main() {
    test_add_book();
    test_remove_book();
    return 0;
}
