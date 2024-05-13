#include <fcntl.h>
#include "libft.h"

int	main(void)
{
	// Open a file for writing
	int	fd = open("test_putnbr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return (1);
	}

	// Test int to write
	int	num_neg = -2147483647;
	int	num_pos = 2147483647;
	int	num_ran1 = 345643;
	int	num_ran2 = 0;
	int	num_ran3 = 456;
	int	num_ran4 = -456;
	const char	nl = '\n';

	ft_putnbr_fd(num_neg, fd);
	write(fd, &nl, 1);

	ft_putnbr_fd(num_pos, fd);
	write(fd, &nl, 1);

	ft_putnbr_fd(num_ran1, fd);
	write(fd, &nl, 1);

	ft_putnbr_fd(num_ran2, fd);
	write(fd, &nl, 1);

	ft_putnbr_fd(num_ran3, fd);
	write(fd, &nl, 1);

	ft_putnbr_fd(num_ran4, fd);
	write(fd, &nl, 1);

	// Close the file
	if (close(fd) == -1)
	{
		perror("close");
		return (1);
	}
	printf("Test file test_putnbr written successfully!\n");
	return (0);
}
