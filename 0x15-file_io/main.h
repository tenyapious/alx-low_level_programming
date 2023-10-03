#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef _READ_TEXTFILE_H
#define _READ_TEXTFILE_H
ssize_t read_textfile(const char *filename, size_t letters);
#endif

#ifndef CREATE_FILE
#define CREATE_FILE
int create_file(const char *filename, char *text_content);
#endif
