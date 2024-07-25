/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1223.c
                    Created: 2024-07-25, 10:36:39 |
                    Updated: 2024-07-25, 10:41:36 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>

void afficherTab(int tab[]);

int main (void)
{
    int n[] = { 1, 2, 3, 5, 7};

    puts("Votre Tableau :");
    afficherTab(n);
    return (0);
}

void afficherTab(int tab[])
{
    int x;

    for ( x = 0; x < TAILLE; x++)
        printf("%d\t", tab[x]);
    putchar('\n');
}