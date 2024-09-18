#include <stdio.h>

struct  CompteBancaire 
{
    char Nom[50];
    float solde;
};

void ajouterMontant(struct CompteBancaire *compte,float montant)
{
    compte->solde += montant;
}

void afficherCompte(struct CompteBancaire compte)
{
    printf("Nom : %s\n",compte.Nom);
    printf("Solde  : %.2f\n",compte.solde);
}

int main()
{
    struct CompteBancaire compte;

    printf("Entrez le nom du titulaire : ");
    scanf(" %[^\n]s",compte.Nom);

    printf("Entrez le solde initial :");
    scanf("%f",&compte.solde);

    float montant;

    printf("Entrez le montant à ajouter :");
    scanf("%f",&montant);

    ajouterMontant(&compte,montant);

    printf("\n--- Informations du compte ---\n");
    afficherCompte(compte);

    return 0;
}