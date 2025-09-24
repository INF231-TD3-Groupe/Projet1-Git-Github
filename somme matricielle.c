#include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[])
{
	system("clear");
	printf("\n\t***ADDITION DE MATRICES***");
	printf("\n\nEntre les coordonnee de la premiere matrice : ");
	int x[2][2],y[2][2],i,j,z[2][2];
	for (i=0;i<2;i++){
	   	for (j=0;j<2;j++){
	   	       printf("\nX[%d][%d] = ",i+1,j+1);
              	scanf("%d",&x[i][j]);
	   	}
	}
	printf("\n\nEntre les coodonnees de la deuxieme matrice : ");
    	for (i=0;i<2;i++){
    	   	for (j=0;j<2;j++){
    	   	       printf("\nY[%d][%d] = ",i+1,j+1);
                  	scanf("%d",&y[i][j]);
	   	}
	}
	for (i=0;i<2;i++){
    	   	for (j=0;j<2;j++){
    	   	       z[i][j]=x[i][j]+y[i][j];
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