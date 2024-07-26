/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1224.c
                    Created: 2024-07-26, 10:04:30 |
                    Updated: 2024-07-26, 10:11:23 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>

void incremTab (int tab[]);
void afficherTab(int tab[]);

#define TAILLE 5

int main (void)
{
    int n[] = { 1, 2, 3, 5, 7};

    puts("Votre Tableau :");
    afficherTab(n);
    puts("\nVotre Tableau modifié :");
    incremTab(n);
    afficherTab(n);
    return (0);
}

void incremTab(int tab[])
{
    int i;

    i = 0;
    for ( i = 0; i < TAILLE; i++)
        tab[i] += 1;
    
}
void afficherTab(int tab[])
{
    int x;

    for ( x = 0; x < TAILLE; x++)
        printf("%d\t", tab[x]);
    putchar('\n');
}