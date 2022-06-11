#include <stdio.h>

int main()
{
        int sayilar[6] = {1,2,3,4,5,6};
        int *sayilarDizisininAdresi = &sayilar;
        printf("%d\n",*sayilarDizisininAdresi);
        printf("%d\n",*sayilarDizisininAdresi+1);
        printf("%d\n",*sayilarDizisininAdresi+2);
        printf("%d\n",*sayilarDizisininAdresi+3);
        printf("%d\n",*sayilarDizisininAdresi+4);
        printf("%d\n",*sayilarDizisininAdresi+5);
        return 0;
}
