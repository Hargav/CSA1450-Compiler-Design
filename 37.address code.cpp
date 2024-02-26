#include<stdio.h>
#include<string.h>
int main() 
{
    char statement[100];
    printf("Enter an assignment statement: ");
    fgets(statement, sizeof(statement), stdin);
    statement[strcspn(statement, "\n")] = '\0';
    char *tokens[3];
    tokens[0] = strtok(statement, "=");
    tokens[1] = strtok(NULL, "=");
    if(tokens[0] != NULL && tokens[1] != NULL) {
        printf("Three-Address Code:\n");
        printf("1. t1 = %s\n", tokens[1]);
        printf("2. %s = t1\n", tokens[0]);
    } else {
        printf("Invalid input statement\n");
    }
    return 0;
}
