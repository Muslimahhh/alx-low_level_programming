#include "main.h"
/**
  * read_textfile - reads text from a file and outpust to std_out
  * @filename: pointer t the file
  * @letters: the length of letters to be read and prnt
  * Return: the number of character printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p_num, r_num;
	char *buf;
	int fd;

	if (filename == NULL)
		return (0);
	buf = (char *) malloc(letters * sizeof(char) + 1);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	r_num = read(fd, buf, letters);
	if (r_num == -1)
	{
		free(buf);
		return (0);
	}
	p_num = write(STDOUT_FILENO, buf, r_num);

	if (p_num == -1)
	{
		free(buf);
		return (0);
	}
	if (r_num != p_num)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (p_num);
}

