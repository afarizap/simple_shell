#ifndef SHELL_H
#define SHELL_H

/* =========================== */
/* Libraries */
/* =========================== */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>
#include <dirent.h>
#include <limits.h>

/* =========================== */
/* Headers */
/* =========================== */
#include "1_list.h"
#include "2_aux.h"
#include "3_vars.h"
#include "4_env.h"
#include "5_extend.h"
#include "6_error.h"

/* =========================== */
/* Macros */
/* =========================== */
/* #define PATH_MAX 4096 */

/* =========================== */
/* Variables */
/* =========================== */
extern char **environ;

#endif
