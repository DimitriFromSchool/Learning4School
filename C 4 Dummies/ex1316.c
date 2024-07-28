/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1316.c
                    Created: 2024-07-27, 10:17:33 |
                    Updated: 2024-07-28, 9:54:24 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>

int main (void)
{
    char lastname[4][11] = { "Washington", "Adams", "Jefferson", "Monroe" };
    char firstname[4][11] = { "George", "John", "Thomas", "James" };
    int i = 0;

    for ( i = 0; i < 4; i++)
    {
        printf("%s %s",firstname[i] ,lastname[i]);
        putchar('\n');
    }
    return (0);
}