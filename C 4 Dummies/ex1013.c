/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1013.c
                      Created: 2024-05-31, 15:53:00 |
                      Updated: 2024-05-31, 16:11:28 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

void limiter(int stop);
int verifier(int num);

int main(void)
{
    int s;
    
    printf("Indiquez une valeur entre 0 et 100:");
    scanf(" %d", &s);
    if (verifier(s) == 1)
        limiter(s);
    return (0);
}

void limiter(int stop)
{
    int x;
    for (x = 0; x <= 100; x = x + 1)
    {
        printf("%d ", x);
        if (x == stop)
        {
            puts("Vous avez gagné!");
            return;
        }   
        puts("Je gagne !");
    }
}

int verifier(int num)
{
    if (num < 0 || num > 100)
    {
        printf("Perdu ! Vous n'avez pas respecté les règles!");
        return (0);
    }
    return (1);
}