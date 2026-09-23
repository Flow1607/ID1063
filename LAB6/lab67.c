#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1024

void replace_char(char *str, char x, char y) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == x) {
            str[i] = y;
        }
    }
}

int main() {
    char *str = malloc(MAX_SIZE * sizeof(char));
    if (str == NULL) {
        return 1;
    }

    char x, y;

    // Read full line 
    if (fgets(str, MAX_SIZE, stdin) != NULL) {
        // Strip the trailing newline
        str[strlen(str)-1] = '\0';
    }

    // Read the two replacement characters 
    scanf(" %c", &x); // space before scanf for any whitespaces
    scanf(" %c", &y);

    replace_char(str, x, y);

    printf("%s\n", str);

    free(str);
    return 0;
}

