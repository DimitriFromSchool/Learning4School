/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1209.c
                      Created: 2024-06-13, 23:36:43 |
                      Updated: 2024-06-18, 21:10:06 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main (void)
{
    char phrase[] = "Texte insignifiant";
    int i;

    i = 0;
    while ( phrase[i] != '\0' )
    {
        putchar(phrase[i]);
        i++;
    }
    putchar('\n');
    return (0);
}

//After a little weekend in paris, back to the basics . Wait and see...
/* #include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) // Équivalent de int main()
{
  int nombreDeVies; 
     
  return 0;
} */