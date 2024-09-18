#include <stdio.h>
#include <string.h>

struct livre {
    char titre[100];
    char auteur[100];
    int annee;
};


struct livre lirLivre()
{
    struct livre lir;

    printf("Entrez le titre : ");
    scanf(" %[^\n]s",lir.titre);
    printf("Enter auteur : ");
    scanf(" %[^\n]s",lir.auteur);
    printf("Enter annes : ");
    scanf("%d",&lir.annee);

    return lir;
}

int main()
{
    struct livre myLivre = lirLivre();

    printf("\nInformations du livre :\n");
    printf("Titre : %s\n",myLivre.titre);
    printf("auteur : %s\n",myLivre.auteur);
    printf("Annee : %d\n",myLivre.annee);

    return 0;
}