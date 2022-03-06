//
// Created by ну я on 03.03.2022.
//

#ifndef PROJECT_REPLACE_H
#define PROJECT_REPLACE_H

#include "../string_.h"

bool isThisWorldCorrectForString(char *s, char *w, size_t wSize) {
    while (wSize != 0) {
        wSize--;
        if (*s != *w)
            return 0;
        s++;
        w++;
    }
    return 1;
}


void replace(char *source, char *w1, char *w2) {
    size_t w1Size = strlen(w1);
    size_t w2Size = strlen(w2);
    WordDescriptor word1 = {w1, w1 + w1Size};
    WordDescriptor word2 = {w2, w2 + w2Size};

    char *readPtr, *recPtr;
    if (w1Size >= w2Size) {
        readPtr = source;
        recPtr = source;
    } else {
        copy(source, getEndOfString(source), _stringBuffer);
        readPtr = _stringBuffer;
        recPtr = source;
    }
    while (*readPtr != '\0') {
        if (isThisWorldCorrectForString(readPtr, w1, w1Size)) {
            copy(word2.begin, word2.end, recPtr);
            readPtr += w1Size;
            recPtr += w2Size;
        } else {
            copy(word1.begin, word1.end, recPtr);
            readPtr += w2Size;
            recPtr += w1Size;
        }
    }
    *recPtr = '\0';
}



void test_changingWords_equalWordCount() {
    char s[MAX_STRING_SIZE] = "A B";
    replace(s, "A", "B");
    ASSERT_STRING("B A", s);
}

#endif //PROJECT_REPLACE_H
