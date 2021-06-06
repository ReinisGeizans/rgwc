#include <stdio.h>

int main(void)
{
    int c;
    printf("enter character\n");
    while ((c = getchar()) != EOF)
        printf("%c %d %x\n", c, c, c);

    return 0;
}
