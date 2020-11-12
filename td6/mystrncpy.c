#include "mystrncpy.h"

void mystrncpy(char *s1, char *s2, int n){
    unsigned long size = strlen(s1);
    for (int i = n -1 ; i < size; i++) {
        s2[i - n + 1] = s1[i];
    }
}