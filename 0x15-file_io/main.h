#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *message, const char *file_name, int exit_code);
int main(int argc, char *argv[]);
void print_osabi(Elf64_Ehdr h);
void print_version(Elf64_Ehdr h);
void print_data(Elf64_Ehdr h);
void print_class(Elf64_Ehdr h);
void print_magic(Elf64_Ehdr h);
void print_error(const char *message, int exit_code);
#endif
