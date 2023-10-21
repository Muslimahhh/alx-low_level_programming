#include <unistd.h>
#include <string.h>

int main(void)
{
  char my_string[];

  my_string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
  write(STDERR_FILENO, my_string, strlen(my_string));
  return (0);
}
