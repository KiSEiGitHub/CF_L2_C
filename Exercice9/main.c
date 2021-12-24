#include <stdio.h>

float moyenne(int tab[5]) {
    int somme = 0;
    for (int i = 0; i < 5; ++i) {
        somme += tab[i];
    }

    return somme / 5;
}

int main() {
    int tab[5];

    for (int i = 0; i < 5; ++i) {
        printf("Entrez une valeur :");
        scanf("%d", &tab[i]);
        printf("Valeur saisie : %d\n", tab[i]);
    }

    float moy = moyenne(tab);

    for (int i = 0; i < 5; ++i) {
        if(tab[0] > moy){
            tab[0] = tab[i];
        }
    }

    printf("moy : %.2f\n", moy);
    printf("%d", tab[0]);
}