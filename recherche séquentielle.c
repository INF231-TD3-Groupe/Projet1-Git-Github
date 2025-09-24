#include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[])
{
	system("clear");
	printf("\n\t***RECHERCHE SEQUENTIELLE DANS UN TABLEAU***");
	int n;
	printf("\n\nEntre la taille du tableau : ");
	scanf("%d",&n);
	int t[n];
	printf ("Entre les elements du tableau : ");
	for(int i=0;i<n;i++){
	    scanf("%d",&t[i]);
	    }
	    int e;
	printf("Entre l'element a trouver : ");
	scanf(" %d",&e);
	for(int i=0; i<n;i++){
	    if (t[i]==e){
	            printf("\nElement trouvé a la position %d !",i+1);
	            return 0;
	        }
	    }
	 printf("\nElement non trouvé !");
	    return 0;
}