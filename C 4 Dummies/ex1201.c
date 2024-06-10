/*
 *             ░       ░                             ░    ░   
 *    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
 *     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
 *                                 github:DimitriFromSchool::.
 *  ────────────────────────────────────────────────────────────
 *           Project: ex1201.C
 *                      Created: 2024-06-10, 23:07:25 |
 *                      Updated: 2024-06-10, 23:15:15 | 
 *  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    int scoremax1, scoremax2, scoremax3;
    
    printf("Entrez votre meilleur score:");
    scanf("%d", &scoremax1);
    printf("Entrez votre second meilleur score:");
    scanf("%d", &scoremax2);
    printf("Entrez votre troisième meilleur score:");
    scanf("%d", &scoremax3);

    puts("Voici vos meilleurs scores");
    printf("#1 %d\n", scoremax1);
    printf("#2 %d\n", scoremax2);
    printf("#3 %d\n", scoremax3);
    
    return (0);
}