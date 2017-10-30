#include <stdio.h>
#include <stdlib.h>

void fatal(char *poruka);
int read_word(FILE *fd);
short read_half(FILE *fd);
void write_word(FILE *fd, int word);
void write_half(FILE *fd, short word);
