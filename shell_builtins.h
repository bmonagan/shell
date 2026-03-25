#ifndef SHELL_BUILTINS_H
#define SHELL_BUILTINS_H

/* lsh_num_builtins - return the number of built-in commands */
int lsh_num_builtins(void);

/* execute - run a builtin command if matched, otherwise launch a process */
int execute(char **args);

#endif /* SHELL_BUILTINS_H */
