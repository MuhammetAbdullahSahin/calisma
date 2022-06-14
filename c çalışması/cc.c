#include <stdio.h>

void task(int *x, int *y)
{
        *x=*x+1;
        *y=*y+1;
}

int main(void)
{
        int x = 19, y = 42;
        printf("x: %d, y: %d\n", x, y);
        task(&x, &y);
        printf("x: %d, y: %d\n", x, y);
        return 0;
}
/*
void task(int x, int y)
{
        x++;
        y++;
}

int main(void)
{
        int x = 19, y = 42;
        printf("x: %d, y: %d\n", x, y);
        task(&x, &y);
        printf("x: %d, y: %d\n", x, y);
        return 0;
}
*/