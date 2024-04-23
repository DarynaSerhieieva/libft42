
# libft42
Reproducing Behavior of Standard C Functions
In this project, I aim to reproduce the behavior of several standard C library functions. Each function is described below along with its purpose and expected behavior.
Functions to Implement
Character Classification Functions
1 isalpha
Purpose: Checks if a character is an alphabetic character (a-z or A-Z).
Prototype: int isalpha(int c)
2 isdigit
Purpose: Checks if a character is a digit (0-9).
Prototype: int isdigit(int c)
3 isalnum
Purpose: Checks if a character is alphanumeric (a-z, A-Z, or 0-9).
Prototype: int isalnum(int c)
4 isascii
Purpose: Checks if a character is a 7-bit ASCII character.
Prototype: int isascii(int c)
5 isprint
Purpose: Checks if a character is printable (including space).
Prototype: int isprint(int c)
String Functions
6 strlen
Purpose: Calculates the length of a string.
Prototype: size_t strlen(const char *s)
7 memset
Purpose: Sets a block of memory to a specified value.
Prototype: void *memset(void *s, int c, size_t n)
8 bzero
Purpose: Equivalent to memset(s, 0, n).
Prototype: void bzero(void *s, size_t n)
9 memcpy
Purpose: Copies a block of memory from one location to another.
Prototype: void *memcpy(void *dest, const void *src, size_t n)
10 memmove
Purpose: Copies a block of memory, handling overlapping regions correctly.
Prototype: void *memmove(void *dest, const void *src, size_t n)
11 strlcpy
Purpose: Safely copies a string into a fixed-size buffer.
Prototype: size_t strlcpy(char *dest, const char *src, size_t size)
12 strlcat
Purpose: Safely concatenates a string onto the end of another string.
Prototype: size_t strlcat(char *dest, const char *src, size_t size)
13 toupper
Purpose: Converts a lowercase letter to uppercase.
Prototype: int toupper(int c)
14 tolower
Purpose: Converts an uppercase letter to lowercase.
Prototype: int tolower(int c)
15 strchr
Purpose: Finds the first occurrence of a character in a string.
Prototype: char *strchr(const char *s, int c)
16 strrchr
Purpose: Finds the last occurrence of a character in a string.
Prototype: char *strrchr(const char *s, int c)
17 strncmp
Purpose: Compares the first n characters of two strings.
Prototype: int strncmp(const char *s1, const char *s2, size_t n)
18 memchr
Purpose: Searches for a character in a block of memory.
Prototype: void *memchr(const void *s, int c, size_t n)
19 memcmp
Purpose: Compares two blocks of memory.
Prototype: int memcmp(const void *s1, const void *s2, size_t n)
20 strnstr
Purpose: Locates a substring in a string, limited to a certain length.
Prototype: char *strnstr(const char *haystack, const char *needle, size_t len)
21 atoi
Purpose: Converts a string to an integer.
Prototype: int atoi(const char *nptr)
Memory Allocation Functions
22 calloc
Purpose: Allocates memory for an array and initializes it with zero.
Prototype: void *calloc(size_t nmemb, size_t size)
23 strdup
Purpose: Duplicates a string.
Prototype: char *strdup(const char *s)
