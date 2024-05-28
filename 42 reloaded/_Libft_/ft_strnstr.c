/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_strnstr.c
                      Created: 2024-05-28, 23:50:54 |
                      Updated: 2024-05-29, 00:15:39 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>
#include <bsd/string.h> 

/*char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    return(NULL);
}*/

int main(void)
{
    char    *tosearch =  "Ich bin groß und stark mein Freund";
    char    *tofind   =  "groß und stark";
    size_t  len = 24;
    
    printf("%s", strnstr(tosearch, tofind, len));
    

    return (0);
}
