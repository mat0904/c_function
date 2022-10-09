/*
** EPITECH PROJECT, 2022
** pre_test
** File description:
** strcpy.c
*/

void my_strcpy(char *destination, char const *source)
{
    int len_str = 0;
    int i = 0;

    while (*(source + i) != '\0'){
        len_str += 1;
        i += 1;
    }
    for (int y = 0; y < len_str; y++){
        *(destination + y) = *(source + y);
    }
}