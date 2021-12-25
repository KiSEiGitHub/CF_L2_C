#include <stdio.h>

int main() {
    int vectX[100] = {};
    int x, n, flag = 0, somme = 0, flag2 = 0;
    int vectY[100] = {};

    printf("Combien de valeur a saisir ? :");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Entrez une valeur :");
        scanf("%d", &x);
        printf("Valeur saisie : %d\n", x);
        vectX[i] = x;
    }

    for (int i = 0; i < n; ++i) {
        if (vectX[i] % 3 == 0) {
            vectY[i] = 1;
        } else {
            vectY[i] = 0;
        }
    }

    printf("---------------------------------\n");

    for (int i = 0; i < n; ++i) {
        if (vectX[i] % 3 == 0) {
            printf("valeur : %d | indice : %d\n", vectX[i], i);
        }
    }
    
    printf("---------------------------------\n");

    for (int i = 0; i < n; ++i) {
        if(vectX[i] % 3 == 0){
            flag++;
        }
    }

    printf("Nombre de valeur de X multiple de 3 : %d\n", flag);

    printf("---------------------------------\n");

    for (int i = 0; i < n; ++i) {
        if(vectX[i] % 3 == 0){
            somme += vectX[i];
            flag2++;
        }
    }

    float moyenne = somme / flag2;

    printf("Moyenne des valeurs X multiple de 3 = %.2f", moyenne);

}