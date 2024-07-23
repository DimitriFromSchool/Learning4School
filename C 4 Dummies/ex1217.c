/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1217.c
                    Created: 2024-07-22, 4:33:43 |
                    Updated: 2024-07-23, 1:02:11 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>

int main (void) 
{
    char tictactoe[3][3];
    int x, y;

    for(x = 0; x < 3; x++)
        for(y = 0; y < 3; y++)
           tictactoe[x][y] = '.';
    tictactoe[1][1] = 'X';
    
    puts("Une partie de Morpion?");
    for (x = 0; x < 3; x++)
    {
        for(y = 0; y < 3; y++)
            printf("%c\t", tictactoe[x][y]);
        putchar('\n');
    }
    return (0);
}