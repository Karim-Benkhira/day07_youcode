#include <stdio.h>
#include <math.h>

const M_PI = 3.14159;

struct cercle {
    float rayon;
};

void afficherAire(struct cercle c) {
    float aire = M_PI * c.rayon * c.rayon;
    printf("L'aire du cercle avec rayon %.2f est %.2f\n", c.rayon, aire);
}

int main() {
    struct cercle c;

    printf("Entrez le rayon du cercle : ");
    scanf("%f", &c.rayon);

    afficherAire(c);

    return 0;
}
