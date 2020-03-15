#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

void swap(char *arr , char *arr2);

int length(char *arr);

char *resize(char *arr, int size, int new_size);

int strlen(char *arr);

int strcmp( char *arr, char *arr2);

int strncmp (char *arr , char *arr2 , int Max_num);

char *strchr( char *arr, int a);

char *strcpy(char *arr);

char *strcat(char *arr, char *arr2);

char *strncat( char *arr , char *arr2 , int n);

int strstr(char *arr, char *world);

char *strpbrk(char *arr, char *arr2);

char *strspn(char *arr , char *arr2);

int strcspn(char *arr, char *arr2);

char *strcpy_s( char *arr);

int find_last_of( char *arr, char *arr2, int p);

int find_first_of(char *arr, char *arr2, int p);

int find_first_not_of(char *arr, char *arr2, int p);

char *pop_back(char *arr);

char *push_back( char *arr);

#endif
