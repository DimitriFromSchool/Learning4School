/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1216.c
                    Created: 2024-07-17, 12:05:57 |
                    Updated: 2024-07-17, 12:33:56 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>

#define TAILLE 4

int main(void)
{
    char text[TAILLE] = "Hey!";
    char temp;
    int i, j, k;

    /*Affiche le texte */
    puts("Texte initial :\n");
    for (i = 0; i < TAILLE; i++)
        printf("%c\t", text[i]);
    putchar('\n');
    
    /*Tri les lettres */
    puts("Lettres Triées :\n");
    for (j = 0; j < TAILLE - 1; j++)
    {
        for (k = j + 1; k < TAILLE; k++)
        {
            if (text[j] < text[k])
            {
                temp = text[j];
                text[j] = text[k];
                text[k] = temp;
            }
        }    
    }
    
    /*Affiche le texte trié */
    

    printf("%s ", text);


    
    return (0);
}