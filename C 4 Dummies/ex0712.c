/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0712.c
                      Created: 2024-05-23, 20:09:29 |
                      Updated: 2024-05-23, 20:19:55 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    char    prenom[30];
    char    nom[30];
    int     chiffre;
    printf("Veuillez indiquer votre prénom :\n");
    scanf("%s", prenom);
    printf("Maintenant, indiquer votre nom :\n");
    scanf("%s", nom);
    printf("Ravi de vous rencontrer %s %s", prenom, nom);
    printf("Quel est votre chiffre favori ?\n");
    scanf("%d", chiffre);
    printf("%d ? Quel heureux hasard, moi aussi!\n", chiffre);
    
    
    
}
