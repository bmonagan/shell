#ifndef READ_LINE_H
#define READ_LINE_H

#include <stdio.h>
#include <stdlib.h>

/* initial buffer size for getline-style input */
#define RL_BUFFER_SIZE 1024

/*
 * read_line - read a line of input from stdin, returning a malloc'd string.
 * The caller is responsible for freeing the returned pointer.
 * On allocation failure the function prints an error and exits(EXIT_FAILURE).
 */
char *read_line(void);

#endif /* READ_LINE_H */
