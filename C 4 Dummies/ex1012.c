/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1012.c
                      Created: 2024-05-31, 15:41:51 |
                      Updated: 2024-05-31, 15:50:27 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

void limiter(int stop);

int main(void)
{
    int s;
    
    printf("Indiquez une valeur entre 0 et 100:");
    scanf(" %d", &s);
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
    }
    puts("Je gagne !");
}