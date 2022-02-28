//
// Created by ну я on 25.02.2022.
//

#ifndef PROJECT_STRING__H
#define PROJECT_STRING__H
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <memory.h>

//возвращает количество символов в строке (не считая ноль-символ)
int strlen(const char *s);

//возвращает указатель на первый элемент с кодом ch, расположенным на ленте памяти между
//адресами begin и end не включая end. Если символ не найден, возвращается значение end.
char* find(char *begin, const char *end, int ch);

//возвращает указатель на первый символ, отличный от пробельных, расположенный на ленте памяти,
// начиная с begin и заканчивая ноль-символом.
// Если символ не найден, возвращается адрес первого ноль-символа.
char* findNonSpace(char *begin);

//возвращает указатель на первый пробельный символ, расположенный на ленте памяти начиная с адреса begin
//или на первый ноль-символ
char* findSpace(char *begin);

//возвращает указатель на первый справа символ, отличный от пробельных,
//расположенный на ленте памяти, начиная с rbegin и заканчивая rend Если символ не найден, возвращается адрес rend.
char* findNonSpaceReverse(char *rbegin, const char *rend);

//возвращает указатель на первый пробельный символ справа, расположенный на ленте памяти, начиная с rbegin и заканчивая rend.
// Если символ не найден, возвращается адрес rend
char* findSpaceReverse(char *rbegin, const char *rend);

//Функция возвращает отрицательное значение, если lhs109 располагается до rhs
//в лексикографическом порядке (как в словаре), значение 0, если lhs и rhs равны, иначе – положительное значение.
int strcmp ( const char * lhs , const char * rhs);

//записывает по адресу beginDestination
//фрагмент памяти, начиная с адреса beginSource до endSource.
//Возвращает указатель на следующий свободный фрагмент памяти в destination
char* copy(const char *beginSource, const char *endSource, char *beginDestination);

#endif //PROJECT_STRING__H
