#include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[])
{
	system("clear");
	printf("\n\t***TESTE SI TON TABLEAU EST TRIER PAR ORDRE CROISSANT***");
	int n;
	printf("\n\nEntre la taille du tableau : ");
	scanf("%d",&n);
	int t[n];
	printf ("Entre les elements du tableau : ");
	for(int i=0;i<n;i++){
	    scanf("%d",&t[i]);
	    }
	for(int i=0; i<n;i++){
	    if (t[i]>t[i+1]){
	            printf("\nLe tableau n'est pas trié !");
	            return 0;
	        }
	    }
	 printf("\nLe tableau est trié !");
	    return 0;
}