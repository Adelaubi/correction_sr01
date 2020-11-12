#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "mystrupdown.h"
#include "mystrncpy.h"
#include "mystrncat.h"
#include "mystrinv.h"
#include "mystrchrn.h"

int main(){

    printf("Quel fonction utilisée ?\n");
    printf("1 - Inversion des majuscules/minuscules\n");
    printf("2 - Inversion de la chaîne de caractère\n");
    printf("3 - Calcul du nombre d'occurrence\n");
    printf("4 - Filtrage d'une chaîne\n");
    printf("5 - Concaténation partielle de chaînes\n");

    int ans = 0;
    while (ans < 1 || ans > 5){
        scanf("%d", &ans);
    }

    char rep[10];
    char base[10];
    char a;
    int n;

    switch (ans) {
        case 1:
            printf("Entrez la chaîne à transformer: ");
            scanf("%s", base);
            mystrupdown(base, rep);
            printf("\n");
            break;
        case 2:
            printf("Entrez la chaîne à transformer: ");
            scanf("%s", base);
            printf("Chaîne inversée : ");
            mystrinv(base, rep);
            printf("\n");
            break;
        case 3:
            printf("Entrez la chaîne à compter: ");
            scanf("%s", base);
            printf("\n");
            getchar();
            printf("Quel caractère compter ?");
            scanf("%c",&a);
            printf("\n");
            printf("Nombre d'itérations : %d \n", mystrchrn(base, a));
            printf("\n");
            break;
        case 4:
            printf("Entrez la chaîne à filtrer: ");
            scanf("%s", base);
            printf("A partir de quel endroit?");
            scanf("%d",&n);
            printf("\n");
            mystrncpy(base, rep, n);
            printf("\n");
            break;
        case 5:
            printf("Entrez la chaîne à filtrer: ");
            scanf("%s", base);
            printf("\n");
            printf("Sur quelle chaîne ?");
            scanf("%s",rep);
            printf("\n");
            printf("A partir de quel endroit?");
            scanf("%d",&n);
            printf("\n");
            printf("Chaîne concaténée : ");
            mystrncat(base, rep, n);
            printf("\n");
            break;
    }

}