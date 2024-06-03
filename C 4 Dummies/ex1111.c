/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1111.c
                      Created: 2024-06-03, 23:20:53 |
                      Updated: 2024-06-03, 23:34:48 | 
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
    return (0);
}