#include <stdio.h>

struct etudiant 
{
    char nom[50];
    char prenom[50];
    int notes[4];
};

int main()
{
    struct etudiant E;

    printf("Entrez votre nom : ");
    scanf("%s", E.nom);

    printf("Entrez votre prenom : ");
    scanf("%s", E.prenom);

    printf("Entrez vos 4 notes : ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &E.notes[i]);
    }

    printf("Nom: %s\n", E.nom);
    printf("Prenom: %s\n", E.prenom);
    printf("Notes: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", E.notes[i]);
    }
    printf("\n");

    return 0;
}
