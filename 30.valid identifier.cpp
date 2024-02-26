#include <stdio.h>
#include <ctype.h>
int isValidIdentifier(char *identifier) {
    if (!isalpha(identifier[0]) && identifier[0] != '_') {
        return 0;
    }
    int i = 1;
    while (identifier[i] != '\0') {
        if (!isalnum(identifier[i]) && identifier[i] != '_') {
            return 0; 
        }
        i++;
    }
    return 1;  
}
int main() {
    char identifier[100];
    printf("Enter an identifier: ");
    scanf("%s", identifier);
    if (isValidIdentifier(identifier)) {
        printf("Valid Identifier: %s\n", identifier);
    } else {
        printf("Invalid Identifier: %s\n", identifier);
    }
    return 0;
}
