#include <stdio.h>

int main(void)
{
    int c;
    int i = 0;
    while ((c = getchar()) != EOF)
        i++;
    printf("%d\n", i);
    return 0;
}
