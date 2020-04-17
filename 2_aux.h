#ifndef AUX_H
#define AUX_H

#include "0_shell.h"

/* =========================== */
/* 2_aux_one.c */
/* =========================== */
int _strlen(char *s);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);

/* =========================== */
/* 2_aux_two.c */
/* =========================== */
char *_strcat2(char *dest, int check, char *src);
char *_rev_str(char *str);
char *_itoa(int num);

#endif
