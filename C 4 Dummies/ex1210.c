/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1210.c
                      Created: 2024-06-20, 11:25:08 |
                      Updated: 2024-06-20, 12:09:51 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <string.h>

int main (void)
{
    char prenom[12];
    char nom[12];
    
    printf("Quel est votre prénom ? : ");
    fgets(prenom, sizeof(prenom), stdin);
    prenom[strcspn(prenom, "\n")] = '\0'; //trcspn(prenom, "\n") trouve la position du caractère de nouvelle ligne dans la chaîne prenom et le remplace par un caractère nul (\0), ce qui termine la chaîne
    printf("Quel est votre nom ? : ");
    fgets(nom, sizeof(nom), stdin);
    nom[strcspn(nom, "\n")] = '\0';
    printf("Longueur du nom : %zu\n", strlen(nom));

    printf("Ravi de vous rencontrer, %s %s!\n", prenom, nom);
    return (0);
}