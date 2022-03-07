#include "string\tasks\removeNonletters.h"
#include "string\tasks\removeExtraSpaces.h"
#include "string\tasks\digitToStart.h"
#include "string\tasks\LetterToStart.h"
#include "string\tasks\replacingNumbersWithSpaces.h"
#include "string\tasks\replace.h"
#include "string\tasks\ordered.h"
#include "string\tasks\getBagOfWords.h"

void test(){
    test_removeNonLetters();
    test_removeExtraSpaces();
    test_digitToStart();
    test_LetterToStart();
    test_replacingNumbersWithSpaces();
    test_areWordsOrdered();
}




int main() {
    test_reverseWordsBag();

    return 0;
}

