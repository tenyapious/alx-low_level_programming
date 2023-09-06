#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read text file and prints to the stdout
 * @filename: name of the text file
 * @letters: number of bytes to read
 *
 * Return: number of bytes written
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, byte_read, byte_written, byte_count;
	char *buffer;

	/* for signed int comparison compatibility */
	byte_count = letters;

	if (filename == NULL)
		return (0);

	buffer = malloc(byte_count * sizeof(char));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	byte_read = read(fd, buffer, byte_count);
	if (byte_read < 0)
		return (0);

	byte_written = write(STDOUT_FILENO, buffer, byte_read);
	if (byte_written == -1 || byte_written < byte_read)
		return (0);

	free(buffer);
	close(fd);

	return (byte_written);
}
