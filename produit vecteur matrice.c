#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    printf("\n\t*** PRODUIT VECTEUR × MATRICIEL 2x2 ***\n");

    int x[2], y[2][2], z[2];
    z[0]=0;
    z[1]=0;
    int i, j, k;
    printf("\nEntrez les coordonnées du vecteur  (x y) : ");
    for (i = 0; i < 2; i++) {
         scanf("%d", &x[i]);
    }
    printf("\nEntrez les coordonnées de la matrice : \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Y[%d][%d] = ", i+1, j+1);
            scanf("%d", &y[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            z[j] += x[i] * y[i][j];
        }
    }
    printf("\nLe produit vecteur matrice est : (%d ; %d)",z[0],z[1]);

    return 0;
}