/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1212.c
                      Created: 2024-06-21, 23:26:33 |
                      Updated: 2024-06-21, 23:34:02 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main (void)
{
    char prenom[16];
    char nom[16];
    
    printf("Quel est votre prénom ? : ");
    scanf("%15s", prenom);
    printf("Quel est votre nom ? : ");
    scanf("%15s", nom);

    printf("Ravi de vous rencontrer, %.4s %.3s!\n", prenom, nom);
    return (0);
}