//
// Created by ну я on 03.03.2022.
//

#ifndef PROJECT_REPLACINGNUMBERSWITHSPACES_H
#define PROJECT_REPLACINGNUMBERSWITHSPACES_H

#include "../string_.h"

void replacingNumbersWithSpaces(char *s) {
    char *end = getEndOfString(s);
    char *endBuffer = copy(s, end, _stringBuffer);
    char *readPtr = _stringBuffer;

    while (*readPtr != *endBuffer) {
        if (isdigit(*readPtr)) {
            char digit = *readPtr - '0';
            while (digit != 0) {
                *(s++) = ' ';
                digit--;
            }
        } else {
            *(s++) = *readPtr;
        }
        readPtr++;
    }
    *s = '\0';
}


void test_replacingNumbersWithSpaces1() {
    char s[] = "Hi3bro";
    replacingNumbersWithSpaces(s);
    ASSERT_STRING("Hi   bro", s);
}

void test_replacingNumbersWithSpaces2() {
    char s[] = "Hi1bro";
    replacingNumbersWithSpaces(s);
    ASSERT_STRING("Hi bro", s);
}

void test_replacingNumbersWithSpaces3() {
    char s[] = "Hi0br1o";
    replacingNumbersWithSpaces(s);
    ASSERT_STRING("Hibr o", s);
}

void test_replacingNumbersWithSpaces4() {
    char s[] = "1Hib1ro";
    replacingNumbersWithSpaces(s);
    ASSERT_STRING(" Hib ro", s);
}

void test_replacingNumbersWithSpaces(){
    test_replacingNumbersWithSpaces1();
    test_replacingNumbersWithSpaces2();
    test_replacingNumbersWithSpaces3();
    test_replacingNumbersWithSpaces4();
}

#endif //PROJECT_REPLACINGNUMBERSWITHSPACES_H
