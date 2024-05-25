/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ex0912.c
                      Created: 2024-05-25, 22:42:33 |
                      Updated: 2024-05-25, 22:56:30 | 
  ────────────────────────────────────────────────────────────
 */
#include <stdio.h>

int main(void)
{
    int letter, letter2, letter3;
    int formateur = 0;
    
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
        {   
            for (letter3 = 'A'; letter3 <= 'Z'; letter3++)
            {
                printf("%c%c%c\t", letter, letter2, letter3);
                formateur++;
                if (formateur == 13)
                {
                    puts("\t\n");
                    formateur = 0;
                }
            }
        }
        
    }
    return (0); 
}