#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	run_test(const char *s1, const char *set, const char *expected_result)
{
	char	*result;

	result = ft_strtrim(s1, set);

	if (result == NULL && expected_result == NULL)
		printf("Test Passed: '%s' trimmed with '%s' => NULL\n", s1, set);
	else if (result != NULL && expected_result != NULL && strcmp(result, expected_result) == 0)
		printf("Test Passed: '%s' trimmed with '%s' => '%s'\n", s1, set, result);
	else 
		printf("Test Failed: '%s' trimmed with '%s' => '%s' (Expected: '%s')\n", s1, set, result, expected_result);

	free(result);
}

int	main(void)
{
	run_test("  hello  ", " ", "hello");
	run_test("  hello world  ", " ", "hello world");
	run_test("  hello  ", " eh", "llo");
	run_test("hello", "xyz", "hello");
	run_test("", " ", "");
	run_test(NULL, " ", NULL);
	run_test("hello", NULL, NULL);
	return (0);
}
