#include <stdio.h>

int main(void) {
    char line[128];

    while (1) {
        printf("> ");

        if (fgets(line, sizeof(line), stdin) == NULL) {
            break;
        }

        printf("INPUT: %s", line);
    }

    return 0;
}