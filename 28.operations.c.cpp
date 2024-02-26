#include <stdio.h>

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int main() {
    char input[100];
    printf("Enter an expression: ");
    fgets(input, sizeof(input), stdin);

    int i = 0;
    while (input[i] != '\0') {
        if (isOperator(input[i])) {
            printf("Valid Operator: %c\n", input[i]);
        }
        else{
        	printf("Invalid Operator");
		}
		i++;
    }

    return 0;
}
