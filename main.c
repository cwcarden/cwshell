#include "main.h"

int main(int ac, char **argv)
{
    char *prompt = "(cwshell-0.1) $ ";
    char *lineprt;
    size_t n = 0;

    printf("%s", prompt);
    getline(&lineprt, &n, stdin);
    printf("%s\n", lineprt);

    free(lineprt);

    return 0;
}
