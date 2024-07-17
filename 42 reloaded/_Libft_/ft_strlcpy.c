/*
  ░       ░                             ░    ░   
  .*✶░█▀▄ █ █▀▄▀█ █ ▀█▀ █▀█ █ █░█ █▀ █▀▀ █░█ █▀█ █▀█ █░✶*..
   ..*█▄▀ █ █░▀░█ █ ░█░ █▀▄ █ ▀▀█ ▄█ █▄▄ █▀█ █▄█ █▄█ █▄▄*✶.
                               github:DimitriFromSchool::.
────────────────────────────────────────────────────────────
         Project: ft_strlcpy.c
                    Created: 2024-07-17, 2:06:08 |
                    Updated: 2024-07-17, 2:18:35 |
────────────────────────────────────────────────────────────
*/

#include <stdio.h>

size_t strlcpy(char *dst, const char *src, size_t dstsize);

int main (void)
{
  
  char *source = "Hello!";
  char *destination;
  size_t size = 6;

  strlcpy(destination, source, size);

  printf("%s \n", destination);
  return (0);
}
