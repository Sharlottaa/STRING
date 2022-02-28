//
// Created by ну я on 25.02.2022.
//

#include "string_.h"

int strlen(const char *s) {
    char *end = s;
    while (*end != '\0') {
        end++;
    }
    return end - s;
}

char *find(char *begin, const char *end, int ch) {
    while (begin != end && *begin != ch) {
        begin++;
    }
    return begin;
}

char *findNonSpace(char *begin) {
    assert(*begin != '\0');
    while (*begin != '\0' && isspace(*begin)) {
        begin++;
    }
    return begin;
}

char *findSpace(char *begin) {
    while (*begin != '\0' && !isspace(*begin)) {
        begin++;
    }
    return begin;
}

char *findNonSpaceReverse(char *rbegin, const char *rend) {
    assert(*rbegin != '\0');
    while (*rbegin >= *rend && isspace(*rend)) {
        rbegin--;
    }
    return rbegin;
}

char* findSpaceReverse(char *rbegin, const char *rend){
    while (*rbegin >= *rend && isspace(*rend)) {
        rbegin--;
    }
    return rbegin;
}

int strcmp(const char *lhs, const char *rhs) {
    int f;
    while (*lhs != '\0' && *rhs != '\0') {
        f = *lhs - *rhs < 0 ? -1 : *lhs - *rhs > 0;
        lhs++;rhs++;
    }
    return f;
}

char* copy(const char *beginSource, const char *endSource, char *beginDestination) {
    memcpy(beginDestination, beginSource, endSource - beginSource);

    return beginDestination + (endSource - beginSource);
}


char* copyIf(char *beginSource, const char *endSource, char *beginDestination, int (*f)(int)){
    while (beginSource!=endSource){
        if(f(*beginSource)){
            (*beginDestination++)=*beginSource;
        }
        beginSource++;
    }
    return beginDestination;
}

char* copyIfReverse(char *rbeginSource, const char *rendSource,char *beginDestination, int (*f)(int)){
    while (rbeginSource!=rendSource){
        if(f(*rbeginSource)){
            (*beginDestination++)=*rbeginSource;
        }
        rbeginSource--;
    }
    return beginDestination;
}
