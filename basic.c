#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char line[128];

    while (1) {
        printf("> ");

        if (fgets(line, sizeof(line), stdin) == NULL) {
            break;
        }

        char *p = line;

        if (isdigit(*p)) {
            int number = strtol(p, &p, 10);

            while (isspace(*p)) {
                p++;
            }

            printf("LINE NUMBER = %d\n", number);
            printf("CODE = %s", p);
        } else {
            printf("COMMAND = %s", line);
        }
    }

    return 0;
}