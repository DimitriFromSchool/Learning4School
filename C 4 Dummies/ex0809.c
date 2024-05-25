/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0809.c
                      Created: 2024-05-25, 21:31:41 |
                      Updated: 2024-05-25, 22:02:40 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main(void)
{
    char choixMenu;
    
    puts ("Bienvenue. Veuillez choisir votre formule :\n");
    puts ("A - Formule Pension Complète (Petit Déjeuner,Repas du Midi & du Soir");
    puts ("B - Formule Demi-Pension (Petit Déjeuner,Repas du Soir");
    puts ("C - Formule Matinal (Petit Déjeuner Seul\n");
    printf("Entrez la lettre correspondante à votre formule souhaitée\n");
    scanf("%c", &choixMenu);
    puts ("\n");
    printf("################# Récapitulatif de votre commande #################\n");
    
    switch (choixMenu)
    {
    case 'A':
        printf("Vous avec choisi la formule A :");
        puts ("\n");
        printf("Pension Complète (Petit Déjeuner,Repas du Midi & du Soir");
        break;
    case 'B':
        printf("Vous avec choisi la formule B :");
        puts ("\n");
        printf("Demi-Pension (Petit Déjeuner,Repas du Soir");
        break;
    case 'C':
        printf("Vous avec choisi la formule C :");
        puts ("\n");
        printf("Petit Déjeuner Seul");
        break;
    default:
        printf("Votre Choix semble incorrect");
    }
    puts ("\n");
    printf("%70s\n", "Merci et à très vite dans notre établissement.");
    return (0);
}
