/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1008.c
                      Created: 2024-05-30, 23:10:14 |
                      Updated: 2024-05-30, 23:12:45 | 
  ────────────────────────────────────────────────────────────
 */
#include <stdio.h>

void graph(int cmptr, char icon);

int main(void)
{
    int valeur;
    char icon;
    
    valeur = 2;
    icon = '+';
    while (valeur <=64)
    {
        graph(valeur, icon);
        printf("La valeur est %d\n", valeur);
        valeur = valeur * 2;
    }
    return (0);
}

void graph(int cmptr, char icon)
{
    int x;
    int y;

    for (x = 0; x < cmptr; x = x + 1)
    {
        putchar(icon);
    }
    for (y = 0; x + y != 64; y = y + 1)
    {
        putchar(' ');
    }
    putchar('\t');
}