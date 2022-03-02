//
// Created by ну я on 01.03.2022.
//

#ifndef PROJECT_REMOVEEXTRASPACES_H
#define PROJECT_REMOVEEXTRASPACES_H

#include "../string_.h"


void removeExtraSpaces(char *s) {
    char end = *s;
    char *destination = s;
    while (*s != '\0') {
        if (end != ' ' || *s != ' ') {
            *(destination++) = *s;
        }
        end = *s;
        s++;
    }
    *destination = '\0';
}

void test_removeExtraSpaces() {
    char s[] = "Hi        bro";
    removeExtraSpaces(s);
    ASSERT_STRING("Hi bro", s);
}

#endif //PROJECT_REMOVEEXTRASPACES_H
