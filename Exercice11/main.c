#include <stdio.h>
#include <stdbool.h>

int F(int x) {
    return 3 * x + 5;
}

float moyenne(int Vect[], int N) {
    int somme = 0;
    for (int i = 0; i < N; ++i) {
        somme += Vect[i];
    }

    return somme / N;
}

int main() {
    int vectX[100] = {};
    int vectY[100] = {};
    int Xmin, Xmax, N, valeur, flag = 0;

    while (true) {
        printf("Xmin :");
        scanf("%d", &Xmin);

        printf("Xmax :");
        scanf("%d", &Xmax);

        if (Xmin < Xmax) {
            printf("Nombre de points :");
            scanf("%d", &N);
            break;
        } else {
            printf("Xmin ne peut pas %ctre plus grand que Xmax\n", 136);
        }
    }

    while (flag < N) {
        printf("Entrez des valeurs dans l'intervalle de [%d - %d] :", Xmin, Xmax);
        scanf("%d", &valeur);
        if (valeur >= Xmin && valeur <= Xmax) {
            vectX[flag] = valeur;
            flag++;
        } else {
            printf("%d n'est pas dans l'intervalle !\n", valeur);
        }
    }

    for (int i = 0; i < N; ++i) {
        vectY[i] = F(vectX[i]);
    }

    printf("---------------------------------\n");
    float xmoy = moyenne(vectX, N);
    float ymoy1 = moyenne(vectY, N);
    int ymoy2 = F(xmoy);

    printf("moyenne vectY = %.2f\n", ymoy1);
    printf("moyenne vectX = %.2f\n", xmoy);
    printf("F(xmoy) = %d", ymoy2);

}