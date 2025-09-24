#include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[])
{
	system("clear");
	printf("\n\t***INVERSER UN TABLEAU***");
	int n;
	printf("\n\nEntre la taille du tableau : ");
	scanf("%d",&n);
	int t[n];
	printf("Entre les elements du tableau : ");
	for(int i=0; i<n;i++){
	    scanf("%d",&t[i]);
	    }
	 printf("\n\nLe tableau inverser est : T = [ ");
	 for(int i=n-1; i>0;i--){
	    printf("%d,",t[i]);
	    }
	    printf("%d ]",t[0]);
	    return 0;
}