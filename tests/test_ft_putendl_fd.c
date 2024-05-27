#include <fcntl.h>
#include "libft.h"

int	main(void)
{
	// Open a file for writing
	int	fd = open("test_putendl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return (1);
	}

	// Test characters to write
	char	characters[] = "Hello, world, this is putendl!\n";

	ft_putendl_fd(characters, fd);

	// Close the file
	if (close(fd) == -1)
	{
		perror("close");
		return (1);
	}
	printf("Test file putendl written successfully!\n");
	return (0);
}
