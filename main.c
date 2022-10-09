/*
** EPITECH PROJECT, 2022
** pre_test
** File description:
** main.c
*/

#include <stdio.h>
#include <unistd.h>

void my_strcpy(char *destination, char const *source);
void my_strcat(char *destination, char const *source);

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char str[] = "salut";
    char str_2[] = "cmoa";
    my_strcat(str, str_2);
    printf("%s", str);
}