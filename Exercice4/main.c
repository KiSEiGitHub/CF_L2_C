#include <stdio.h>
#include <stdbool.h>

int Somme(int data[10], int n);

int main() {
    int data[10] = {};
    int n, flag = 0, vect;

    while (true) {
        printf("Saisir N :");
        scanf("%d", &n);
        if (n <= 10) {
            break;
        } else {
            printf("N ne peut pas %ctre plus grand que 10", 136);
            continue;
        }
    }

    while (true) {
        printf("Saisir un nombre :");
        scanf("%d", &vect);

        if (vect < 10 && vect > 2) {
            printf("Cette valeur est dans l'intervalle, arr%ct du programme...", 136);
            break;
        } else if (vect < 0) {
            printf("Pas de nombre n%cgatif...", 130);
        } else {
            data[flag] = vect;
            flag++;
        }

        if (flag == n) {
            break;
        }
    }

    int somme = Somme(data, n);

    if (somme > 0) {
        printf("Somme des nombres impair : %d", somme);
    } else {
        printf("Pas de nombre impair...");
    }
}

int Somme(int data[10], int n) {
    int somme = 0;

    for (int i = 0; i < n; ++i) {
        if (data[i] % 2 == 1) {
            somme += data[i];
        }
    }
    return somme;
}
