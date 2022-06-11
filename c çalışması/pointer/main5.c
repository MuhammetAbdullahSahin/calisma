#include <stdio.h>
#include <stdlib.h>


int main()
{
        char isim[20] = {'a','b','d','u','l','l','a','h','\0'};// a 10600 değerinde tutuluyor ise b 10601 d 10602 u 10603 l 10604 l 10605 a 10606 h 10607
        char *can;
        can = isim;

        printf("%c", *(can+1));



        return 0;
}
