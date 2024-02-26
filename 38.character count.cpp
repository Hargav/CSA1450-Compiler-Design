#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX_SIZE 1000
void lexicalAnalyzer(char *input) {
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        charCount++;
        if (input[i] == '\n') {
            lineCount++;
        }
        if (isspace(input[i]) || input[i] == '\0') {
            if (inWord) {
                inWord = 0;
                wordCount++;
            }
        } else {
            inWord = 1;
        }
    }
    printf("Character count: %d\n", charCount);
    printf("Word count: %d\n", wordCount);
    printf("Line count: %d\n", lineCount);
}
int main() {
    char input[MAX_SIZE];
    printf("Enter text:\n");
    while (fgets(input, sizeof(input), stdin) != NULL) {
        lexicalAnalyzer(input);
    }
    return 0;
}

