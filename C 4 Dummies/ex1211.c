/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1211.c
                      Created: 2024-06-21, 23:22:36 |
                      Updated: 2024-06-21, 23:25:03 | 
  ────────────────────────────────────────────────────────────
 */


#include <stdio.h>


int main (void)
{
    char prenom[12];
    char nom[12];
    
    printf("Quel est votre prénom ? : ");
    scanf("%s", prenom);
    printf("Quel est votre nom ? : ");
    scanf("%s", nom);

    printf("Ravi de vous rencontrer, %s %s!\n", prenom, nom);
    return (0);
}