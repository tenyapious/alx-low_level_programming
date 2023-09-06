#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name for the file
 * @text_content: contents to write to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, byte_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL || strcmp(text_content, "NULL") == 0)
		text_content = "";

	byte_written = write(fd, text_content, strlen(text_content));
	if (byte_written == -1)
		return (-1);

	close(fd);

	return (1);
}
