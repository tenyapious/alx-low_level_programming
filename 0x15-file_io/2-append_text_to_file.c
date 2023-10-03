#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - append text to a file
 * @filename: path to file
 * @text_content: text contents to append to file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, byte_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
