/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1006.c
                      Created: 2024-05-30, 22:40:51 |
                      Updated: 2024-05-30, 23:09:24 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

void graph(int cmptr);

int main(void)
{
    int valeur;
    
    valeur = 2;
    while (valeur <=64)
    {
        graph(valeur);
        printf("La valeur est %d\n", valeur);
        valeur = valeur * 2;
    }
    return (0);
}

void graph(int cmptr)
{
    int x;
    int y;

    for (x = 0; x < cmptr; x = x + 1)
    {
        putchar('*');
    }
    for (y = 0; x + y != 64; y = y + 1)
    {
        putchar(' ');
    }
    putchar('\t');
}