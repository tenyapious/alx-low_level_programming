#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (strcmp(text_content, "NULL") == 0)
		text_content = "";

	byte_written = write(fd, text_content, strlen(text_content));
	if (byte_written == -1)
		return (-1);

	close(fd);

	return (1);
}
