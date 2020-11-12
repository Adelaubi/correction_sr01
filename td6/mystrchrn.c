#include "mystrchrn.h"

int mystrchrn(char *s, char c){
    int rep = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == c) rep++;
    }
    return rep;

}