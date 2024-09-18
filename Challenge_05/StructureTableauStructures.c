#include <stdio.h>
#include <string.h>

struct produit
{
    char nom[50];
    float prix;
    int quantité;
};

void entrerProduit(struct produit *p)
{
    printf("Entrez le nom du produit : ");
    scanf(" %[^\n]s",p->nom);

    printf("Entrez le prix : ");
    scanf("%f",&p->prix);

    printf("Entrez la quantite : ");
    scanf("%d",&p->quantité);

}

void afficherProduit(struct produit p)
{
    printf("Nom : %s\n",p.nom);
    printf("Le prix : %.2f\n",p.prix);
    printf("quantite : %d\n",p.quantité);
}

int main()
{
    int n;

    printf("Combien de produits voulez-vous entrer? ");
    scanf("%d",&n);

    struct produit produits[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nProduit %d\n",i + 1);
        entrerProduit(&produits[i]);
    }

    printf("\n--- Informations des produits ---\n");

    for (int i = 0; i < n; i++)
    {
        afficherProduit(produits[i]);
    }
    
    return 0;
    
}