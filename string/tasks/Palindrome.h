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
    word.end--;
    while (*word.begin == *word.end && word.begin < word.end ) {
        word.end--,word.begin++;
    }
    return word.begin >= word.end;
}

int countPalindromeWords(char *s) {
    int count=0;
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

void test_countPalindromeWords1(){
    char s[]="mam,i,love,u";
    assert(countPalindromeWords(s)==3);
}

void test_countPalindromeWords2(){
    char s[]="mam,ded,ba";
    assert(countPalindromeWords(s)==2);
}

void test_countPalindromeWords3(){
    char s[]="sos,appa,f";
    assert(countPalindromeWords(s)==3);
}

void test_countPalindromeWords4(){
    char s[]="sos";
    assert(countPalindromeWords(s)==1);
}

void test_countPalindromeWords(){
    test_countPalindromeWords1();
    test_countPalindromeWords2();
    test_countPalindromeWords3();
    test_countPalindromeWords4();
}

#endif //PROJECT_PALINDROME_H
