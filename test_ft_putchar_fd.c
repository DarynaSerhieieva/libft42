#include <fcntl.h>
#include "libft.h"

int main() {
    // Open a file for writing
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    // Test characters to write
    char characters[] = "Hello, world!\n";

    for (int i = 0; characters[i] != '\0'; ++i) {
        ft_putchar_fd(characters[i], fd);
    }

    // Close the file
    if (close(fd) == -1) {
        perror("close");
        return (1);
    }

    printf("Test file written successfully!\n");

    return (0);
}
