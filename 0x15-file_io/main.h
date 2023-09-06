#ifndef READ_TEXTFILE
#define READ_TEXTFILE
ssize_t read_textfile(const char *filename, size_t letters);
#endif

#ifndef CREATE_FILE
#define CREATE_FILE
int create_file(const char *filename, char *text_content);
#endif
