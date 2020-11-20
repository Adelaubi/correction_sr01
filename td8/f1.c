#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
        int pid;

        pid=fork();
        switch (pid)
        {
            case -1 : printf("fork : erreur\n"); break;
            case  0 : printf("\n\n ici le fils , mon pid est %d et le pid de mon pere est %d\n\n", getpid(), getppid()); break;
            default : printf("ici le parent , mon pid est %d et le pid de mon fils est %d et le pid de mon pere est %d \n", getpid(), pid , getppid());
        }

    }
