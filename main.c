#include <stdio.h>
#include <ctype.h>

char *findNonSpac(char *begin) {
    while (*begin != (char) isspace(*begin)) {
        begin++;
        printf("%s +\n", begin);
    }
    return begin;
}

char *findS(char *begin) {
    while (*begin != '\0' && !isspace(*begin)) {
        begin++;
    }
    return begin;
}

int main() {
    char *s="Hi mo";
    char d[7]="Helklo\t";

    printf ("%u\n", *(findS( s ) )) ; // 2
   printf ("%u\n", *(findChar(s) )) ; // 2
    return 0;
}
