//
// Created by ну я on 07.03.2022.
//

#ifndef PROJECT_MIXTWOSTRINGS_H
#define PROJECT_MIXTWOSTRINGS_H

#include "../string_.h"

void mixTwoStrings(char *s, char *string1, char *string2) {
    WordDescriptor word1, word2;
    bool isW1Found, isW2Found;
    char *copyS = s;
    char *beginSearch1 = string1, *beginSearch2 = string2;
    while ((isW1Found = getWord(beginSearch1, &word1)),
            (isW2Found = getWord(beginSearch2, &word2)),
            isW1Found || isW2Found) {
        if (isW1Found) {
            copyS = copy(word1.begin, word1.end, copyS);
            *copyS++ = ' ';
            beginSearch1 = word1.end;
        } else if (isW2Found) {
            copyS = copy(word2.begin, word2.end, copyS);
            *copyS++ = ' ';
            beginSearch2 = word2.end;
        }
    }
    if (copyS != s) {
        copyS--;
    }
    *copyS='\0';

}

void test_mixTwoStrings1() {
    char s[MAX_STRING_SIZE];
    char s1[] = "a n";
    char s2[] = "g j";
    mixTwoStrings(s,s1, s2);
    ASSERT_STRING("a n g j",s );
}

void test_mixTwoStrings2() {
    char s[MAX_STRING_SIZE];
    char s1[] = "mama eto mir";
    char s2[] = "deda i ba toge";
    mixTwoStrings(s,s1, s2);
    ASSERT_STRING("mama eto mir deda i ba toge",s);
}

void test_mixTwoStrings3() {
    char s[MAX_STRING_SIZE];
    char s1[] = "opa";
    char s2[] = "op";
    mixTwoStrings(s,s1, s2);
    ASSERT_STRING("opa op",s);
}

void test_mixTwoStrings4() {
    char s[MAX_STRING_SIZE];
    char s1[] = "Ivan";
    char s2[] = "Sergeevich";
    mixTwoStrings(s,s1, s2);
    ASSERT_STRING("Ivan Sergeevich",s);
}

void test_mixTwoStrings(){
    test_mixTwoStrings1();
    test_mixTwoStrings2();
    test_mixTwoStrings3();
    test_mixTwoStrings4();
}

#endif //PROJECT_MIXTWOSTRINGS_H
