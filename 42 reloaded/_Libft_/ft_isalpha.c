/*
             ░       ░                             ░    ░   
    .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
     ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                                 github:DimitriFromSchool::.
  ────────────────────────────────────────────────────────────
           Project: ft_isalpha.c
                      Created: 2024-05-10, 14:58:01 |
                      Updated: 2024-05-23, 15:34:24 | 
  ────────────────────────────────────────────────────────────
 */

#include <stdio.h> 

int ft_isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  else
    return (0);
}

int main(void)
{
  int letter;
  letter = 65;

  if (ft_isalpha(letter)== 1)
    printf("Il s'agit bien de la lettre :  %c", letter);
  else
    printf("Ceci n'est pas une lettre");
  
  return (0);
}
