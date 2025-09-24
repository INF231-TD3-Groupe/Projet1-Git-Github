#include <stdio.h>
# include <stdlib.h>

int main(int argc, char *argv[])
{
	system("clear");
	printf("\n\t***MULTIPLICATION PAR INCREMENTATION***");
	int a,b,c=0;
	printf("\n\nEntre deux nombres : ");
	scanf("%d %d",&a,&b);
	for(int i=0; i<a;i++){
	    for (int j =0; j< b; j++){
	            c++;
	        }
	    }
	 printf("\nLe produit %d × %d = %d ",a,b,c);
	    return 0;
}