#include <stdio.h>

void saisie(int L[100]);

int test(int L[100]);

int main() {
    int Liste[100] = {};

    saisie(Liste);
    int nb = test(Liste);

    printf("Valeur = %d", nb);
}

int test(int L[]) {
    for (int i = 0; i < 7; ++i) {
        if (L[0] < L[i] % 2 == 1 && i % 2 == 0) {
            return L[i];
        }
    }
}

void saisie(int L[]) {
    int nbvaleur, val;

    printf("Nombre de valeur :");
    scanf("%d", &nbvaleur);

    for (int i = 0; i < nbvaleur; ++i) {
        printf("Entrez une valeur :");
        scanf("%d", &val);
        L[i] = val;
    }
}
