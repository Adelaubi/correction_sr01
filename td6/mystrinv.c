#include "mystrinv.h"

void mystrinv(char *s1, char *s2){
    for(int i = 0; i < strlen(s1); i++) {
        s2[i] = s1[strlen(s1) - i - 1];
        printf("%c", s2[i]);
    }
}