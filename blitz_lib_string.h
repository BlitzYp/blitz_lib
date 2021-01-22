#ifndef __BLITZ_LIB_STRING__H
#define __BLITZ_LIB_STRING__H
int freq(const char* string, char to_check);
int strlen(const char* string);
char* remove_non_alpha(const char* string);
void strcpy(char* dest, const char* src);
int find_subrstr(const char* string, const char* target);
#define strcat(string, string2) #string #string2
#endif