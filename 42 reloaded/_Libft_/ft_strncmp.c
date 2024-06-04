/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_strncmp.c
                      Created: 2024-06-04, 21:52:52 |
                      Updated: 2024-06-04, 22:09:10 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <string.h>

/*int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    return ();
}*/

int main(void)
{
    char *s1 = "Coucou le monde";
    char *s2 = "Coucou la terre";
    size_t n =  12;
    
    printf("%d \n", strncmp(s1,s2,n));
}