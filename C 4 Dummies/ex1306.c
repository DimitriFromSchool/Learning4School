/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ex1306.c
                    Created: 2024-07-26, 11:52:07 |
                    Updated: 2024-07-26, 12:06:51 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>
#include <ctype.h>

void ft_upmeetlow (char str[])
{
    int i;

    i = 0;
    while (str[i])
    {
        if (islower(str[i]))
        { 
            str[i] -= 32;
            i++;
        }
        if (isupper(str[i]))
            str[i] += 32;   
        i++;     
    }
}

int main (void)
{
    char str[] = "uN dEUX tROIS sOLEIL.";
    ft_upmeetlow(str);
    printf("%s\n", str);
    return (0);
}