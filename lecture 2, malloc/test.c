#include <stdio.h>
#include <malloc.h>

struct test {
	int a;
	char b;
};

int main(void)
{
	struct test *ptr;

	ptr = malloc(sizeof(struct test));
	ptr->a = 777;
	ptr->b = 'A';

	free(ptr);
	return 0;
}
