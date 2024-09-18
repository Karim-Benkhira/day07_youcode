#include <stdio.h>

struct rectangle 
{
    float longueur;
    float largeur;
};

float Calcul(struct rectangle R)
{
    return R.largeur * R.longueur;
}

int main()
{
    struct rectangle R;

    printf("Entrez la longueur:");
    scanf("%f",&R.longueur);
    printf("Entrez la largeur");
    scanf("%f",&R.largeur);

    float air = Calcul(R);

    printf("L'aire %.2f\n ",air);
    return 0;
}