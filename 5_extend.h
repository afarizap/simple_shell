#ifndef EXTEND_H
#define EXTEND_H

#include "0_shell.h"

/**
 * struct find_command - Struct for build in commands
 * @fc: Build in alias
 * @f: Build in function
 */
typedef struct find_command
{
	char *fc;
	int (*f)(var_s *vars);
} find_command_t;

/* =========================== */
/* 3_extend_one.c */
/* =========================== */
void tokenize(var_s *vars);
int _pipes(var_s *vars);
int _executes(var_s *vars);
int _checks_path(var_s *vars);
void _start_path(var_s *vars);

/* =========================== */
/* 3_extend_two.c */
/* =========================== */
void handler(int sig_num);
int (*built_in(char *name))(var_s *);
int _returnminusone(var_s *vars);
int _custom_exit(var_s *vars);
char **_envtoarray(var_s *vars);
int _replacevars(var_s *vars);

#endif
