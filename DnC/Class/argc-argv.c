#include <stdio.h>

int main(int argc, char **argv)
{
    printf("argc = %d\n", argc);

    printf("&argv = %c\n", &argv);
    printf("*argv = %s\n", *argv);
    printf("**argv = %d\n", **argv);
    
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);

	return 0;
}