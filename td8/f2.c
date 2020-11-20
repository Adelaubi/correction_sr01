#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid1, pid2;

    pid1 = fork();

    switch (pid1) {
        case -1 :
            printf("fork : erreur\n");
            break;
        case 0  :
            printf("\n\n ici le fils 1, mon pid est %d et le pid de mon pere est %d\n\n", getpid(), getppid());
            sleep(1);
            break;
        default :
            wait(0);
            pid2 = fork();
            switch (pid2) {
                case -1 :
                    printf("fork : erreur\n");
                    break;
                case 0 :
                    printf("\n\nici le fils 2, mon pid est %d et le pid de mon pere est %d\n\n", getpid(), getppid());
                    break;
                default :
                    wait(0);
                    printf("\n\n ici le parent , mon pid est %d et le pid de mes fils sont  %d et %d ,et pid de mon pere est %d \n",getpid(), pid1, pid2, getppid());
            }
    }
}