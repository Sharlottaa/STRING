cmake_minimum_required(VERSION 3.20)
project(project C)

set(CMAKE_C_STANDARD 11)

# определение точки входа. Будет запущен файл main . c .
# указывается произвольная метка, в данном случае - project
add_executable(project main.c)

# создаём библиотеку
add_library(str string/string_.h string/string_.c
        string/tasks/removeNonLetters.h
        string/tasks/digitToStart.h
        string/tasks/LetterToStart.h
        string/tasks/replace.h
        string/tasks/removeExtraSpaces.h
        string/tasks/replacingNumbersWithSpaces.h
        string/tasks/ordered.h
        string/tasks/Palindrome.h
        string/tasks/mixTwoStrings.h
        string/tasks/reverseEheOrderOfWordsinString.h
        # string / tasks / reverseWords.h

        # ...
        # < файл с решением задачи >
        # ...
        # string / tasks / hasPairOfWordsWithEqualLetterSet . h
        # string / tasks / printWordsNonEqualLastWord . h
        )

# описываем, что для запуска project потребуется сборка tasks
target_link_libraries(project str)