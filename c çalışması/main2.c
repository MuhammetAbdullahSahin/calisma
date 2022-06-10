#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
        setlocale(LC_ALL,"Turkish");

        char c;

        printf("%d\n", sizeof(char));

        c = 'z';
        printf("'%c' -> %d\n", c, c);
        c = 'A';
        printf("'%c' -> %d\n", c, c);
        c = 'ş';
        printf("'%c' -> %d\n", c, c);


        c = ' ';
        printf("'%c' -> %d\n", c, c);

        return 0;
}
