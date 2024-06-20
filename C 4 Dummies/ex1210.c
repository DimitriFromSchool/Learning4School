/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1210.c
                      Created: 2024-06-20, 11:25:08 |
                      Updated: 2024-06-20, 11:47:19 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main (void)
{
    char prenom[12];
    char nom[12];
    
    printf("Quel est votre prénom ? : ");
    fgets(prenom, 12, stdin);
    printf("\nQuel est votre nom ? : ");
    fgets(nom, 12, stdin);

    printf("Ravi de vous rencontrer, %s %s!\n", prenom, nom);
    return (0);
}