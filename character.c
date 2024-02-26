#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 1000

int main() {
    FILE *file;
    char filename[100];
    char line[MAX_LINE_LENGTH];
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0; // Flag to indicate if currently parsing a word

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL) {
        printf("File not found.\n");
        exit(1);
    }

    // Read lines from the file
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        int i = 0;
        lineCount++; // Increment line count for each line read

        // Count characters and words in the current line
        while (line[i] != '\0') {
            charCount++; // Increment character count for each character read

            // Check for word boundaries
            if (isspace(line[i])) {
                inWord = 0; // Not in a word
            } else if (!inWord) {
                inWord = 1; // Start of a new word
                wordCount++; // Increment word count
            }

            i++;
        }
    }

    // Close file
    fclose(file);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}
