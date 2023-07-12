#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	char *ptrd = dest;

	while (*src != '\0')
    {
	*dest = *src;
	src++;
	dest++;
    }

	*dest = '\0';

	return (ptrd);
}

/*int main()
{
    char src[] = "Hello, world!";
    char dest[20];

    ft_strcpy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}*\
