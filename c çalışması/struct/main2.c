#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci
{
        char ad[10];
        char soyad[10];
        int yas;
};

int main()
{
       // struct ogrenci apo={"Apo","Sahin", 19};

        struct ogrenci apo;
        strcpy(apo.ad,"apo");
        strcpy(apo.soyad,"sahin");
        apo.yas=19;
        
        printf("%s \t %s \t %d", apo.ad, apo.soyad, apo.yas);

        return 0;
}
