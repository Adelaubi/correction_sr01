#include <stdio.h>

int main(int argc, char* argv[], char* envp[]){
    for(int i = 0; i< (sizeof(envp)/sizeof(envp[1])); i++){
        printf("%s\n", envp[i]);
    }
    return 0;
}