#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main()
{
        int x=1;//global

        {
                int x=2;//local
                printf("%d\n",x);
        }
        printf("%d\n",x);

        return 0;
}