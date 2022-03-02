#include <stdio.h>
#include <ctype.h>
#include "string\string_.h"
#include "string\tasks\removeNonletters.h"
#include "string\tasks\removeExtraSpaces.h"
#include "string\tasks\digitToStart.h"

void test(){
    test_removeNonLetters();
    test_removeExtraSpaces();
}

int main() {

    test_digitToStart();
    return 0;
}

