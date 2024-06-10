/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1204.c
                      Created: 2024-06-10, 23:40:53 |
                      Updated: 2024-06-10, 23:46:03 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    int scoremax[4];
    int x;

    for ( x = 0; x < 4; x++)
    {
        printf("Entrez votre meilleur score #%d: ", x + 1);
        scanf("%d", &scoremax[x]);
    }
    puts("\nVoici vos meilleurs scores: \n");
    for ( x = 0; x < 4; x++)
       printf("Votre score #%d : %d\n", (x + 1), scoremax[x]);
    return (0);
}