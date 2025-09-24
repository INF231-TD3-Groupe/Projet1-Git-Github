#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    printf("\n\t*** PRODUIT MATRICIEL 2x2 ***\n");

    int x[2][2], y[2][2], z[2][2];
    int i, j, k;
    printf("\nEntrez les coordonnées de la première matrice : \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("X[%d][%d] = ", i+1, j+1);
            scanf("%d", &x[i][j]);
        }
    }
    printf("\nEntrez les coordonnées de la deuxième matrice : \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Y[%d][%d] = ", i+1, j+1);
            scanf("%d", &y[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            z[i][j] = 0; 
            for (k = 0; k < 2; k++) {
                z[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    printf("\nLe produit des deux matrices est :\n");
    for (i = 0; i < 2; i++) {
        printf("| ");
        for (j = 0; j < 2; j++) {
            printf("%d ", z[i][j]);
        }
        printf("|\n");
    }

    return 0;
}