/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1203.c
                      Created: 2024-06-10, 23:27:22 |
                      Updated: 2024-06-10, 23:37:25 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    int i;
    int scoremax[4];

    i = 0; 
    while ( i < 4 )
    {
        printf("Entrez votre meilleur score #%d:", i + 1);
        scanf("%d", &scoremax[i]);
        i++;
    }
    i = 0;
    puts("\nVoici vos meilleurs scores: \n");
    while ( i < 4 )
    {
       printf("Score #%d : %d\n", (i + 1), scoremax[i]);
        i++;
    }
    return (0);
}