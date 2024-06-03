/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1111.c
                      Created: 2024-06-03, 23:20:53 |
                      Updated: 2024-06-03, 23:43:54 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float resultat, valeur;
    
    printf("Indiquez une valeur factionnaire :");
    scanf("%f", &valeur);
    
    resultat = sqrt(valeur);
    printf("%.2f Racine carrée de = %.2f\n", valeur, resultat);
    resultat = pow(valeur, 3);
    printf("%.2f Puissance cubique de = %.2f\n", valeur, resultat);
    resultat = floor(valeur);
    printf("Arondi par défaut de %.2f = %.2f\n", valeur, resultat);
    resultat = ceil(valeur);
    printf("Arondi par exces de %.2f = %.2f\n", valeur, resultat);
    return (0);
}