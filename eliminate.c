#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 7, d = 2, result1, result2;

    // Original expressions
    result1 = (a + b) * c - d;
    result2 = (a + b) * c - d;

    printf("Original expressions:\n");
    printf("(a + b) * c - d = %d\n", result1);
    printf("(a + b) * c - d = %d\n", result2);

    // Optimized expressions
    int common_subexp = (a + b) * c - d;
    result1 = common_subexp;
    result2 = common_subexp;

    printf("\nOptimized expressions after eliminating common subexpression:\n");
    printf("(a + b) * c - d = %d\n", result1);
    printf("(a + b) * c - d = %d\n", result2);

    return 0;
}
