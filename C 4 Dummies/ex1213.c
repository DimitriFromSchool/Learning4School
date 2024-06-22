/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1213.c
                      Created: 2024-06-22, 23:47:58 |
                      Updated: 2024-06-23, 00:18:34 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h> 

#define TAILLE 6

int main(void)
{
    int tabulles[] = { 95, 60, 6, 87, 50, 24 };
    int valeur1, valeur2, temp, i;
    
    /*Affiche le tableau initial */
    puts("Tableau de départ : ");
    for(i = 0; i < TAILLE; i++)
     printf("%d\t", tabulles[i] );
    putchar('\n');
    
/* Tri du tableau */
    for( valeur2 = 0; valeur2 < TAILLE-1; valeur2++)
    {
            for( valeur1 = valeur2 + 1; valeur1 < TAILLE-1; valeur1++)
            {
                if( tabulles[valeur2] > tabulles[valeur1])
                {
                    temp = tabulles[valeur2];
                    tabulles[valeur2] = tabulles[valeur1];
                    tabulles[valeur1] = temp;
                }
        }
        
    }
    
/* Affiche le tableau apres tri */
puts("Tableau apres tri");
for ( i = 0; i < TAILLE; i++)
{
    printf("%d\t", tabulles[i] );
    putchar('\n');
}

    return (0);
}

