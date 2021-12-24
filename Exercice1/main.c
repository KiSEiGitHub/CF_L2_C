#include <stdio.h>

void saisie(int tab[])
{
    int valeurs;
    for (int i = 0; i < 10; i++)
    {
        printf("Saisir des nombres : ");
        scanf("%d", &valeurs);
        tab[i] = valeurs;
    }
}

int cherche(int tab1[], int tab2[])
{
    static int tab3[10] = {};
    for (int i = 0; i < 10; i++)
    {
        if (tab1[i] == tab2[i])
        {
            tab3[i] = tab1[i];
        }
    }

    printf("Valeur r%ccurente : \n", 130);

    for (int i = 0; i < 10; i++)
    {
        if (tab3[i] != 0)
        {
            printf("%d | ", tab3[i]);
        }
    }
}

int main()
{
    int listeA[10];
    int listeB[10];

    printf("Liste A\n");
    saisie(listeA);

    printf("Liste B\n");
    saisie(listeB);

    cherche(listeA, listeB);
}