#ifndef MAIN_H
#define MAIN_H

#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <limits.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

extern char **environ;
int _strlen(char *str);
int _putchar(char c);
char *show_input(void);
void display_prompt(void);
char *_strcat(char *src);
void place(char *str);
char *findfile(char *command);
char *locate_command(char *command);
int compare(char *s1, char *s2);
int _strcmpdir(char *s1, char *s2);
char *str_concat(char *s1, char *s2);
int lookforslash(char *cmd);
int compareExit(char *s1, char *s2);
int compareEnv(char *s1, char *s2);
void run_command(char **cmd);
char **identify_string(char *parameter);
void handleCtrlC(int sig);
ssize_t input_buf(info_t *info, char **buf, size_t *len)
#endif
