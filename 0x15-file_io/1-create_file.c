#include "main.h"
#include <sys/stat.h>
/**
  * create_file - function that creates a file
  * @filename: pointer t the file
  * @text_content: pointer to the content of the new file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;
	char *txt = text_content;

	while (*txt)
	{
		len++;
		txt++;
	}

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT |  O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		len = 0;
	w = write(fd, text_content, len);
	if (w == -1 || (len != w))
		return (-1);
	close(fd);
	return (1);
}
