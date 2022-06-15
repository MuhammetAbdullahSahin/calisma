#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

struct ogrenciler()
{
        char isim[20];
        char soyisim[20];
        int numara;
        int yas;

        
};



int main()
{
        char ogrenci_bilgileri[4][2];
        struct ogrenciler ogrenci_1;

                strcpy(ogrenci_1.isim,"apo");
                strcpy(ogrenci_1.soyisim,"sahin");
                ogrenci_1.numara,22;
                ogrenci_1.yas,19;

        printf("%s %s %d %d",ogrenci_1.isim,ogrenci_1.soyisim,ogrenci_1.numara,ogrenci_1.yas);
        
        
        return 0;
}
