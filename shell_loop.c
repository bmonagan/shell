#include <stdio.h>
#include <stdlib.h>
#include "shell_loop.h"
#include "read_line.h"
#include "parse_line.h"
#include "shell_builtins.h"
void command_loop(void) {
    char *line;
    char **args;
    int status;

    do {
        printf("> ");
        line = read_line();
        args = split_line(line);
        status = execute(args);

        free(line);
        free(args);
    } while (status);
}