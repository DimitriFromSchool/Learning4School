/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex1209.c
                      Created: 2024-06-13, 23:36:43 |
                      Updated: 2024-06-20, 11:23:56 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>

int main (void)
{
    char prenom[16];
    
    printf("Quel est votre prénom ?");
    fgets(prenom, 16, stdin);
    printf("Ravi de vous rencontrer, %s!\n", prenom);
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