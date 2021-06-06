#include <stdio.h>

int main(void)
{
    int c;
    int i = 0;
    printf("enter character\n");
    while ((c = getchar()) != EOF)
        i++;
    printf("%d\n", i);
    return 0;
}
