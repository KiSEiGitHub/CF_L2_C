#include <stdio.h>
#define Length(x) (sizeof(x) / sizeof((x)[0])) // Array.length en gros

int test(int liste[])
{
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0 && liste[i] % 2 == 1)
        {
            printf("%d", liste[i]);
        }
    }
}

void saisie(int liste[])
{
    int valeurs;
    for (int i = 0; i < 7; i++)
    {
        printf("Saisir valeurs : ");
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