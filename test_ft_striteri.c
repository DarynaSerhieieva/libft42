#include "libft.h"

void example_function(unsigned int index, char *c) {
    printf("Index: %u, Character: %c\n", index, *c);
    
    if (*c >= 'a' && *c <= 'z') {
        *c -= 32;
    }
}

int main() {
    char test_string[] = "hello";

    printf("Original string: %s\n", test_string);

    ft_striteri(test_string, example_function);
    if (test_string[0] != 'H')
    {
        printf("Test failed!\n");
        return (1);
    }
        
    printf("Modified string: %s\n", test_string);
    return (0);
}
