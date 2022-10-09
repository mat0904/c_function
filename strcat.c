/*
** EPITECH PROJECT, 2022
** pre_test
** File description:
** strcat.c
*/

int my_strlen(char const *str){
    int len = 0;
    while (*(str + len) != '\0'){
        len += 1;
    }
    return (len);
}

void my_strcat(char *destination, char const *source)
{
    int len = my_strlen(destination);
    int total_len = len + my_strlen(source);
    for (int i = len + 1; i < total_len; i++){
        *(destination + i) = *(source + i); 
    }
    
}