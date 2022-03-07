//
// Created by ну я on 07.03.2022.
//

#ifndef PROJECT_GETBAGOFWORDS_H
#define PROJECT_GETBAGOFWORDS_H

#include "../string_.h"

void getBagOfWords(BagOfWords *bag, char *s) {
    WordDescriptor word;
    bag->size = 0;
    while (getWord(s, &word)) {
        bag->words[bag->size] = word;
        bag->size++;
        s = word.end;
    }
}

void

#endif //PROJECT_GETBAGOFWORDS_H
