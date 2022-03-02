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
    if (*destination == ' ') {
        destination--;
    }
    *destination = '\0';
}

void test_removeExtraSpaces1() {
    char s[] = "Hi        bro";
    removeExtraSpaces(s);
    ASSERT_STRING("Hi bro", s);
}

void test_removeExtraSpaces2() {
    char s[] = "Hi      bro   ";
    removeExtraSpaces(s);
    ASSERT_STRING("Hi bro", s);
}

void test_removeExtraSpaces3() {
    char s[] = "   Hi        bro";
    removeExtraSpaces(s);
    ASSERT_STRING("Hi bro", s);
}

void test_removeExtraSpaces4() {
    char s[] = "Hibro   ";
    removeExtraSpaces(s);
    ASSERT_STRING("Hibro", s);
}


void test_removeExtraSpaces(){
    test_removeExtraSpaces1();
    test_removeExtraSpaces2();
    test_removeExtraSpaces3();
    test_removeExtraSpaces4();
}
#endif //PROJECT_REMOVEEXTRASPACES_H
