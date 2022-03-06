#include "string\tasks\removeNonletters.h"
#include "string\tasks\removeExtraSpaces.h"
#include "string\tasks\digitToStart.h"
#include "string\tasks\LetterToStart.h"
#include "string\tasks\replacingNumbersWithSpaces.h"
#include "string\tasks\replace.h"

void test(){
    test_removeNonLetters();
    test_removeExtraSpaces();
    test_digitToStart();
    test_LetterToStart();
    test_replacingNumbersWithSpaces();
}




int main() {

    test_changingWords_equalWordCount();
    return 0;
}

