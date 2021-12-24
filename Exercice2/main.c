#include <stdio.h>

int test(int liste[]) {
    int flag = 0;
    for (int i = 0; i < 7; i++) {
        if (i % 2 == 0 && liste[i] % 2 == 1) {
            if (liste[0] < liste[i]) {
                liste[0] = liste[i];
            }
        } else if (i % 2 == 0 && liste[i] % 2 == 0) {
            printf("flag : %d\n", flag);
            flag++;
            if (flag == 7){
                return -1;
            }
        }
    }
    return liste[0];
}

void saisie(int liste[]) {
    int valeurs;
    for (int i = 0; i < 7; i++) {
        printf("Saisir valeurs :");
        scanf("%d", &valeurs);
        liste[i] = valeurs;
    }
}

int main() {
    int cas1[7] = {6, 5, 6, 10, 15, 18, 23};
    int cas2[7] = {6, 5, 6, 10, 18, 23, 6};
//    saisie(cas1);
    int val = test(cas1);

    if (val > 0) {
        printf("valeur final : %d", val);
    } else {
        printf("pas de nombre impair en position pair...");
    }
}