//
// Created by ну я on 07.03.2022.
//

#ifndef PROJECT_MIXTWOSTRINGS_H
#define PROJECT_MIXTWOSTRINGS_H

#include "../string_.h"

char *mixTwoStrings(char *s, char *string1, char *string2) {
    WordDescriptor word1, word2;
    bool isW1Found, isW2Found;
    char *copyS = s;
    char *beginSearch1 = string1, *beginSearch2 = string2;
    while ((isW1Found = getWord(beginSearch1, &word1)),
            (isW2Found = getWord(beginSearch2, &word2)),
            isW1Found || isW2Found) {
        if (isW1Found) {
            copyS = copy(word1.begin, word1.end, copyS);
            beginSearch1 = word1.end;
            *copyS++ = ' ';
        } else if (isW2Found) {
            copyS = copy(word2.begin, word2.end, copyS);
            beginSearch2 = word2.end;
            *copyS++ = ' ';
        }
    }
    if (*copyS != *s) {
        copyS--;
    }
    return copyS;
}

void test_mixTwoStrings1() {
    char s[MAX_STRING_SIZE];
    char s1[] = "a n";
    char s2[] = "g j";
    ASSERT_STRING("a g n j", mixTwoStrings(s,s1, s2));
}

void test_mixTwoStrings2() {
    char s[MAX_STRING_SIZE];
    char s1[] = "mama eto mir";
    char s2[] = "deda i ba toge";
    ASSERT_STRING("mama deda eto i ba mir toge", mixTwoStrings(s,s1, s2));
}

void test_mixTwoStrings(){
    test_mixTwoStrings1();
    test_mixTwoStrings2();
}

#endif //PROJECT_MIXTWOSTRINGS_H
