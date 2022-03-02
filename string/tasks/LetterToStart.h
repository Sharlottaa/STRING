//
// Created by ну я on 02.03.2022.
//

#ifndef PROJECT_LETTERTOSTART_H
#define PROJECT_LETTERTOSTART_H

#include "../string_.h"


void LetterToStartDigitToEnd(WordDescriptor word) {
    char *endStringBuffer = copy(word.begin, word.end, _stringBuffer);
    char *recPosition = copyIf(_stringBuffer, endStringBuffer, word.begin, isalpha);
    copyIf(_stringBuffer, endStringBuffer, recPosition, isdigit);
}

void LetterToStart(char *s) {
    char *beginSearch = s;
    WordDescriptor word;

    while (getWord(beginSearch, &word)) {
        LetterToStartDigitToEnd(word);

        beginSearch = word.end;
    }
}

void test_LetterToStart1() {
    char s[] = "Hibro123 ";
    LetterToStart(s);
    ASSERT_STRING("Hibro123", s);
}

void test_LetterToStart2() {
    char s[] = "Hibro1h23 ";
    LetterToStart(s);
    ASSERT_STRING("Hibroh123", s);
}

void test_LetterToStart3() {
    char s[] = "Hibro1h23 j0 ";
    LetterToStart(s);
    ASSERT_STRING("Hibroh123 j0", s);
}

void test_LetterToStart4() {
    char s[] = "Hibro1h23 j0h41 ";
    LetterToStart(s);
    ASSERT_STRING("Hibroh123 jh041", s);
}

void test_LetterToStart(){
    test_LetterToStart1();
    test_LetterToStart2();
    test_LetterToStart3();
    test_LetterToStart4();
}

#endif //PROJECT_LETTERTOSTART_H
