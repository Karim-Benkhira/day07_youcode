#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct persone
{
    char nom[50];
    char prenom[50];
    char age[50];
};

int main()
{
    struct persone p;

    strcpy(p.nom,"karim");
    strcpy(p.prenom,"Benkhira");
    strcpy(p.age,"22");

    printf("Nom : %s\n",p.nom);
    printf("Prenom : %s\n",p.prenom);
    printf("Age : %s\n",p.age);

    return 0;
}