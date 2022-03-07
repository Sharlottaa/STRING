//
// Created by ну я on 07.03.2022.
//

#ifndef PROJECT_PALINDROME_H
#define PROJECT_PALINDROME_H

#include "../string_.h"

char* findNonComma(char *begin){
    while (*begin != '\0' && *begin == ',') {
        begin++;
    }
    return begin;
}

char *findComma(char *begin) {
    while (*begin != '\0' && *begin != ',') {
        begin++;
    }
    return begin;
}

int getWordComma(char *beginSearch, WordDescriptor *word) {
    word->begin = findNonComma(beginSearch);
    if (*word->begin == '\0')
        return 0;

    word->end = findComma(word->begin);
    return 1;
}

bool isPalindromeWord(WordDescriptor word){
    while (word.begin == word.end-- && word.begin / 2) {
        word.begin++;
    }
    return word.begin >= word.end;
}

int countPalindromeWords(char *s) {
    int count;
    char *copyS = s;
    WordDescriptor word;
    while (getWordComma(copyS, &word)) {
        copyS = word.end;
        if (isPalindromeWord(word)) {
            count++;
        }
    }
    return count;
}

#endif //PROJECT_PALINDROME_H
