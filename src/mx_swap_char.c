#include "libmx.h"

void mx_swap_char(char *s1, char *s2) {
    char temp;

    if (s1 == NULL
        || s2 == NULL) {
        return;
    }

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
