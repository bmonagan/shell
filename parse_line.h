#ifndef PARSE_LINE_H
#define PARSE_LINE_H

/* split_line - split a line into an array of tokens (words).
 * The returned array and the strings inside are owned by the caller and
 * should be freed when no longer needed.
 */
char **split_line(char *line);

#endif /* PARSE_LINE_H */
