#include "stdio.h"
#include <unistd.h>
int main(int argc, char const *argv[])
{
    char c;
    while (read(STDIN_FILENO, &c, 1) == 1)
        ;
    printf("Hello\n");
    return 0;
}
