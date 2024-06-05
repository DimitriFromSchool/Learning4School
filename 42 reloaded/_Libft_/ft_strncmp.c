/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_strncmp.c
                      Created: 2024-06-04, 21:52:52 |
                      Updated: 2024-06-05, 12:56:28 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;
    
    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != '\0' || str1[i] != '\0' )
            return (str1[i]-str2[i]);
        i++;
    }
    return (0);
   
}

int main(void)
{
    char *s1 = NULL;
    char *s2 = NULL;
    size_t n = 0;
    printf("ft_strncmp : %d \n", ft_strncmp(s1,s2,n));
    printf("strncmp : %d \n", strncmp(s1,s2,n));
    return (0);
}