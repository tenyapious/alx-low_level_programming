#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - read text from file and prints it to the stdout
 * @filename: path to the text file
 * @letters: number of bytes to read
 *
 * Return: number of bytes written
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, byte_read, byte_written, byte_count;
	char *buf;

	byte_count = letters;

	if (filename == NULL)
		return (0);

	buf = malloc(byte_count * sizeof(char));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	byte_read = read(fd, buf, byte_count);
	if (byte_read < 0)
		return (0);

	byte_written = write(STDOUT_FILENO, buf, byte_read);
	if (byte_written == -1 || byte_written < byte_read)
		return (0);

	free(buf);
	close(fd);

	return (byte_written);
}
