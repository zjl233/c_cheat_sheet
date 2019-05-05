#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char const* argv[]) {
    char months[] = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    char** tokens;

    printf("months=[%s]\n\n", months);

    tokens = split(months, ',');

    if (tokens) {
        int i;
        for (i = 0; *(tokens + i); i++) {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }

    return 0;
}
