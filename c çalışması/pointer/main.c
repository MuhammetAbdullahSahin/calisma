#include <stdio.h>
#include <stdlib.h>

int main()
{
        int *ad1, *ad2, *ad;
        int n=10, p=20;

        ad1=&n;
        ad2=&p;
        printf("atamadan once ad1 degeri %d\n", *ad1);
        printf("atamadan once ad1 bellek yeri %d\n", ad1);
        *ad1=*ad2+2;

        printf("atamadan sonra ad1 degeri %d\n", *ad1);
        printf("atamadan sonra ad1 bellek yeri %d\n", ad1);


        /*
        int *sayi;
        int n;
        n = 20;
        sayi = &n;
        printf("%d\n", *sayi);
        printf("%d\n", sayi);
        printf("%d\n", &n);
        printf("%d\n", n);

        *sayi=30;
        printf("%d\n", &n);
        printf("%d\n", n);
        */
        /*
        int a=10;
        int *p;// pointer tanımladık ve veri tipine göre berlek değeri ayırılır
        p=&a;//p yi a nın adresine atadık
        printf("%d\n", *p);//değer
        printf("%d\n",p);// adreste tutulduğu yer
        */

    return 0;
}
