#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid1, pid2;
    pid1 = fork();
    int status1, status2;

    switch (pid1) {
        case -1 :
            printf("fork : erreur\n");
            break;
        case 0  :
            printf("\n\n ici le fils 1, mon pid est %d et le pid de mon pere est %d\n\n", getpid(), getppid());
            exit(0);
            break;
        default :
            pid1 = waitpid(pid1, &status1, WUNTRACED);
            printf("Retour du fils : %d \n",WEXITSTATUS(status1));
            pid2 = fork();
            switch (pid2) {
                case -1 :
                    printf("fork : erreur\n");
                    break;
                case 0 :
                    printf("\n\nici le fils 2, mon pid est %d et le pid de mon pere est %d\n\n", getpid(), getppid());
                    exit(42);
                    break;
                default :
                    pid2 = waitpid(pid2, &status2, WUNTRACED);
                    printf("\n\n ici le parent , mon pid est %d et le pid de mes fils sont  %d et %d ,et pid de mon pere est %d \n",getpid(), pid1, pid2, getppid());
                    printf("Retour du fils : %d \n",WEXITSTATUS(status2));
            }
    }
}