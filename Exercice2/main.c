#include <stdio.h>

void test(int liste[]) {
    for (int i = 0; i < 7; i++) {
        if (i % 2 == 0 && liste[i] % 2 == 1) {
            printf("%d | ", liste[i]);
        }
    }
}

void saisie(int liste[])
{
    int valeurs;
    for (int i = 0; i < 7; i++)
    {
        printf("Saisir valeurs :");
        scanf("%d", &valeurs);
        liste[i] = valeurs;
    }
}

int main()
{
    int listeL[7];
    saisie(listeL);
    test(listeL);
}