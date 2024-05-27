/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_strrchr.c
                      Created: 2024-05-27, 19:11:40 |
                      Updated: 2024-05-27, 19:29:34 | 
  ────────────────────────────────────────────────────────────
 */

#include<stdio.h>
#include<string.h>

char    *ft_strrchr(const char *s, int c)
{
    char *str;
    int i;

    str = (char *) s;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    while(i >= 0)
    {
        if(str[i] == c)
            return (&str[i]);
        i--;
    }
    return(NULL);  
}

int main(void)
{
    char text[] = "Hello";
    char text2[] = "Hello";
    int letter = 108;
    printf("%s\n",ft_strrchr(text, letter));
    printf("%s\n",strrchr(text2, letter));
    return(0);
}