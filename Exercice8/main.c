#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float carre(int x) {
    return sqrt(x);
}

float cube(int x) {
    return pow(x, 3);
}

int sommeI(int p, int n) {
    int tab_carre[4] = {3, 14, 9, 24};
    int tab_cube[4] = {24, 35, 12, 9};
    int somme_carre = 0, somme_cube = 0;

    if (p == 2) {
        for (int i = 0; i < n; ++i) {
            if (tab_carre[i] % 2 == 1 && tab_carre[i] <= 10) {
                somme_carre += carre(tab_carre[i]);
            }
        }
    } else if (p == 3) {
        for (int i = 0; i < n; ++i) {
            if (tab_cube[i] % 2 == 0 && tab_cube[i] <= 20) {
                somme_cube += cube(tab_cube[i]);
            }
        }
    }

    if (p == 2) {
        if (somme_carre == 0) {
            return -99;
        }
        return somme_carre;
    } else {
        if (somme_cube == 0) {
            return -99;
        }
        return somme_cube;
    }
}

int main() {
    int p = 1;

    while (true) {
        printf("p doit %ctre %cgal %c 2 ou 3 :", 136, 130, 133);
        scanf("%d", &p);

        if (p == 2 || p == 3) {
            break;
        }
    }

    printf("somme = %d", sommeI(p, 4));

}