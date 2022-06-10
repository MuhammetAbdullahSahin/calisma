#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
        setlocale(LC_ALL,"Turkish");
        printf("%d", 'a'.ord);

        return 0;
}