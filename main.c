#include "string\tasks\removeNonletters.h"
#include "string\tasks\removeExtraSpaces.h"
#include "string\tasks\digitToStart.h"
#include "string\tasks\LetterToStart.h"
#include "string\tasks\replacingNumbersWithSpaces.h"


void test(){
    test_removeNonLetters();
    test_removeExtraSpaces();
    test_digitToStart();
    test_LetterToStart();
}




int main() {
    test_replacingNumbersWithSpaces();

    return 0;
}

