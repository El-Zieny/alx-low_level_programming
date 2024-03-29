#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, ssize_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text);
#endif
