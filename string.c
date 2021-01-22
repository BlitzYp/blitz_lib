#include <stdio.h>
#include <malloc.h>

int freq(const char* string, char to_check)
{
    int i = 0, count = 0;
    while (string[i] != '\0') 
        if (string[i++] == to_check) count++;
    return count;
}

int strlen(const char* str)
{
    int i = 0;
    for (;str[i] != '\0';i++);
    return i;
}

char* remove_non_alpha(const char* string)
{
    char* new_string = malloc(sizeof(char) * strlen(string));
    for (int i = 0; string[i] != '\0'; i++)
        if (string[i] >= 65 && string[i] <= 122) new_string[i] = string[i];
    return new_string;
}

void strcpy(char* dest, const char* src)
{
    for (int i = 0; src[i] != '\0';i++)
        dest[i] = src[i];
}

int find_subrstr(const char* string, const char* target)
{
    int length = strlen(string) - 1;
    for (int i = 0, j = 0; i < length; i++)
    {
        if (string[i] == target[j]) j++;
        else { i -= j; j = 0;}
        if (j == strlen(target) - 1) return i - j + 1;
    }
    return -1;
}
