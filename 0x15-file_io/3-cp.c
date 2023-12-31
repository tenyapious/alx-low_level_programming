#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * r_and_w_byte - copy contents of one file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 * @buffer: number of bytes to read at a time
 *
 * Return: 98 if file_from does not exist
 * 99 if create fails or write to file_to fails
 * 100 if closing a fd fails
*/
int r_and_w_byte(char *file_from, char *file_to, char *buffer)
{
	int file_from_d, file_to_d;
	ssize_t byte_read, byte_written;

	file_from_d = open(file_from, O_RDONLY);
	if (file_from_d == -1)
		return (98);

	file_to_d = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to_d == -1)
		return (99);

	do {
		byte_read = read(file_from_d, buffer, 1024);
		if (byte_read == -1)
			return (98);

		byte_written = write(file_to_d, buffer, byte_read);
		if (byte_written == -1)
			return (99);
	} while (byte_read > 0);

	if (close(file_from_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_d);
		return (100);
	}

	if (close(file_to_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_d);
		return (100);
	}

	return (0);
}

/**
 * main - copy contents of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 97 if the number of argument is not equal to 3,
 * 98 if file_from does not exist
 * 99 if create fails or write to file_to fails
 * 100 if closing a fd fails
 */
int main(int argc, char *argv[])
{
	int res;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error allocating memory\n");
		return (-1);
	}

	res = r_and_w_byte(argv[1], argv[2], buffer);

	if (res == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

	if (res == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);

	return (res);
}
