#include "string\tasks\removeNonletters.h"
#include "string\tasks\removeExtraSpaces.h"
#include "string\tasks\digitToStart.h"
#include "string\tasks\LetterToStart.h"

void test(){
    test_removeNonLetters();
    test_removeExtraSpaces();
    test_digitToStart();
}

int main() {
    test_LetterToStart();
    return 0;
}

