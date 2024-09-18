#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employe {
    char nom[50];
    float salaire;
};

void entrerEmployes(struct employe *employes,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEmploye %d\n", i + 1);
        printf("Entrez le nom : ");
        scanf(" %[^\n]", employes[i].nom); 
        printf("Entrez le salaire : ");
        scanf("%f", &employes[i].salaire);
    }
    
}

void afficherEmployes(struct employe *employes,int n)
{
    printf("\n--- Informations des employes ---\n");
    for (int  i = 0; i < n; i++)
    {
        printf("Nom : %s\t",employes[i].nom);
        printf("Salaire : %.2f\n",employes[i].salaire);
    }
    printf("------------------------\n");
}

int main()
{
    int n;

    printf("Combien d'employes voulez-vous entrer ? : ");
    scanf("%d",&n);

    struct employe *employes = (struct employe *)malloc(n * sizeof(struct employe));

    if (employes == NULL)
    {
        printf("Error..");
        return 1;
    }
    

    entrerEmployes(employes,n);

    afficherEmployes(employes,n);

    free(employes);

    return 0;

}