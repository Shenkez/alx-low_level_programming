#include <stdio.h>

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        char *current_char = accept;
        while (*current_char != '\0') {
            if (*s == *current_char) {
                return s;
            }
            current_char++;
        }
        s++;
    }
    return NULL;
}
