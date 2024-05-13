#include <fcntl.h>
#include "libft.h"

int	main(void)
{
	// Open a file for writing
	int	fd = open("test_putchar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return (1);
	}

	// Test characters to write
	char	characters[] = "Hello, world, this is putchar!\n";

	for (int i = 0; characters[i] != '\0'; ++i)
		ft_putchar_fd(characters[i], fd);

	// Close the file
	if (close(fd) == -1)
	{
		perror("close");
		return (1);
	}

	printf("Test file putchar written successfully!\n");
	return (0);
}
