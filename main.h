#ifndef main_h
#define main_h

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

extern char **environ;

void start(void);
char **strsplit(char *string, char *delim);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(const char *str);
int _strlen(char *str);
int process(char **array, char *av[], int cnt);
void free_2d_array(char **array);
int print_env(void);
int _atoi(char *s);
int _isdigit(int c);
int exitfunc(char **array, char *av[], char *line, int cnt, int ret_stat);
int _mycd(info_t *);
void manage_signal(int num_s __attribute__((unused)));
void error_print(char **array, char *av[], int cnt, int num);
int print_int(int n);
int recursive_int(int n, int cnt);
int _putchar(char c);
#endif
