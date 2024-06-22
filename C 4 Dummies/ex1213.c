/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1213.c
                      Created: 2024-06-22, 23:47:58 |
                      Updated: 2024-06-23, 00:58:24 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h> 

#define TAILLE 6

int main(void)
{
    int tabulles[] = { 95, 60, 6, 87, 50, 24 };
    int temp;
    int i ,j ,k;
    
    /*Affiche le tableau initial */
    puts("Tableau de départ : ");
    for(i = 0; i < TAILLE; i++)
     printf("%d\t", tabulles[i] );
    putchar('\n');
    
/* Tri du tableau */
    for (j = 0;j < TAILLE-1;j++) 
    {
            for( k = j + 1; k < TAILLE; k++)
            {
                if( tabulles[j] > tabulles[k])
                {
                    temp = tabulles[j];
                    tabulles[j] = tabulles[k];
                    tabulles[k] = temp;
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

