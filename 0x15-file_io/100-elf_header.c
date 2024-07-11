#include "main.h"

/**
  * main - copy file content to another
  * @argc: argument count
  * @argv: argument variables
  * Return: 0 for success
  */
int main(int argc, char **argv)
{
	int result = _cp(argv[1], argv[2]);

	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		exit(97);
	}
	if (argv[1] == NULL || result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (result == 0)
		_cp(argv[1], argv[2]);
	else if (argv[1] == NULL || result == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	} else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", result);
	}
	return (0);

}
/**
  * _cp - copy file to another file
  * @file_from: from one file
  * @file_to: to another file
  * Return: value integer
  */
int _cp(char *file_from, char *file_to)
{
	int fd_from, fd_to, r_from, w_to, c_to, c_from;
	char buf[1024];

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_from == -1)
		return (-1);
	if (fd_to == -1)
		return (-2);
	while ((r_from = read(fd_from, buf, 1024)) > 0)
	{
		w_to = write(fd_to, buf, r_from);
		if (w_to == -1)
			return (-2);
	}
	if (r_from == -1)
		return (-1);
	c_from = close(fd_from);
	c_to = close(fd_to);
	if (c_from == -1)
		return (c_from);
	if (c_to == -1)
		return (c_to);
	return (0);
}
