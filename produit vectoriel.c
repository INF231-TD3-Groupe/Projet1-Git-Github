#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    printf("\n\t***PRODUIT VECTORIEL EN 3D***\n");
    int a[3], b[3], c[3];
    printf("\nEntrez les coordonnées du premier vecteur (x y z) : ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    printf("Entrez les coordonnées du second vecteur (x y z) : ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 3; i++) {
        int j = (i + 1) % 3;
        int k = (i + 2) % 3;
        c[i] = a[j] * b[k] - a[k] * b[j];
    }
    printf("\nLe produit vectoriel A x B = (%d, %d, %d)\n", c[0], c[1], c[2]);

    return 0;
}