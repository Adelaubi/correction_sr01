#include "mystrncat.h"

void mystrncat(char *s1, char *s2, int n){
    char* tmp[10]; // Chaine vide
    mystrncpy(s1, tmp, n);// tmp = chaine filtrée
    s2 = strcat(s2, tmp); // s2 = tmp + s2
    printf("%s", s2);
}