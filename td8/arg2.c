#include <stdio.h>
extern char** environ;

int main(int argc, char* argv[], char* envp[]){
    for (int i = 0; environ[i] != NULL; i++){
        printf("%s \n", environ[i]);
    }
    return 0;
}