#include <stdio.h>
#include <stdlib.h>

int main()
{
        char can[100] = "Canan";
        char *pl;
        
        pl = can;
        
        printf("5. karakter %c\n", can[4]);
        printf("5. karakter %c", *(pl+4));
        /*
        C harfi 1006 olsa a 1007 n 1008 a 1009 n 1010 \0 karakteri ise 1011 olur
       */


        return 0;
}
