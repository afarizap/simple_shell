#ifndef ERROR_H
#define ERROR_H

#include "0_shell.h"

/* =========================== */
/* 4_error_one.c */
/* =========================== */
void print_error(var_s *vars);
void notfound(var_s *vars);
void notaccess(var_s *vars);
void ilegalnumber(var_s *vars);

#endif
