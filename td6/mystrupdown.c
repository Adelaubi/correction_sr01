#include "mystrupdown.h"


void mystrupdown(char *s1, char *s2){
    printf("Chaîne transformée: ");
    for(int i = 0; i< strlen(s1); i++){
        if (s1[i] >= 'a' && s1[i] <= 'z') { s2[i] = toupper(s1[i]); printf("%c", s2[i]); }
        if (s1[i] >= 'A' && s1[i] <= 'Z')  { s2[i] = tolower(s1[i]); printf("%c", s2[i]); }
    }
}