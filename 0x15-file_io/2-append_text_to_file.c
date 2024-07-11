#include "main.h"
#include <sys/stat.h>
/**
  * append_text_to_file -append text at the EOF
  * @filename: pointer t the file
  * @text_content: pointer to the content of the new file
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, fd, len = 0;

	if (text_content != NULL)
	{
		while (text_content[len++])
			;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
