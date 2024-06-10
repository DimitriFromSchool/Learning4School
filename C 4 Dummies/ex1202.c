/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1202.c
                      Created: 2024-06-10, 23:17:30 |
                      Updated: 2024-06-10, 23:23:57 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    int scoremax1, scoremax2, scoremax3,scoremax4;
    
    printf("Entrez votre meilleur score:");
    scanf("%d", &scoremax1);
    printf("Entrez votre second meilleur score:");
    scanf("%d", &scoremax2);
    printf("Entrez votre troisième meilleur score:");
    scanf("%d", &scoremax3);
    printf("Enntrez votre quatrième meilleur score:");
    scanf("%d", &scoremax4);

    puts("\nVoici vos meilleurs scores: \n");
    printf("#1 %d\n", scoremax1);
    printf("#2 %d\n", scoremax2);
    printf("#3 %d\n", scoremax3);
    printf("#4 %d\n", scoremax4);
    
    return (0);
}