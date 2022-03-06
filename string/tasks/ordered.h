//
// Created by ну я on 06.03.2022.
//

#ifndef PROJECT_ORDERED_H
#define PROJECT_ORDERED_H

#include "../string_.h"

int areWordsEqual(WordDescriptor w1, WordDescriptor w2){
    while (w1.begin == w2.begin&&w1.begin != w1.end - 1) {
        w1.begin++, w2.begin++;
    }
    return *w1.begin - *w2.begin;
}

int areWordsOrdered(char *s) {
    WordDescriptor word1;
    if (!getWord(s, &word1)) {
        return 1;
    }
    s = word1.end;
    WordDescriptor word2 = word1;

    while (getWord(s, &word1)) {
        if (areWordsEqual(word1, word2) < 0) {
            return 0;
        }
        word2 = word1;
        s = word2.end;
    }
    return 1;
}


void test_areWordsOrdered1() {
    char s[] = "a b c d e";
    assert(areWordsOrdered(s));
}

void test_isWordsOrdered2() {
    char s[] = "a b a d e";
    assert(!areWordsOrdered(s));
}

void test_isWordsOrdered3() {
    char s[] = "a b f g";
    assert(areWordsOrdered(s));
}

void test_isWordsOrdered4() {
    char s[] = "ama papa";
    assert(areWordsOrdered(s));
}

void test_areWordsOrdered(){
    test_areWordsOrdered1();
    test_isWordsOrdered2();
    test_isWordsOrdered3();
    test_isWordsOrdered4();
}

#endif //PROJECT_ORDERED_H
