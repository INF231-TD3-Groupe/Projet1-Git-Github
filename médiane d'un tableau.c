#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    printf("\n\t***MEDIANE D'UN TABLEAU***");
    printf("\n\nEntre la taille du tableau : ");
    int n;
    scanf("%d",&n);
    int t[n];
    printf("\nEntre les elements du tableau : ");
    for(int i=0;i<n;i++){
        scanf("%d",&t[i]);
        }
    if (n % 2 != 0) {
        printf ("\n\nLa mediane est : %d",t[n / 2]);
    } else {
        printf("\n\nLa mediane est : %d ",t[(n / 2) - 1]);
    }
    return 0;
}