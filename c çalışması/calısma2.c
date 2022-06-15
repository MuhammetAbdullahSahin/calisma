#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

struct ogrenciler
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
        ogrenci_1.numara = 22;
        ogrenci_1.yas = 19;
        
        struct ogrenciler ogrenci_2;

        strcpy(ogrenci_2.isim,"czn");
        strcpy(ogrenci_2.soyisim,"kla");
        ogrenci_2.numara = 26;
        ogrenci_2.yas = 19;


        printf("%s %s %d %d\n",ogrenci_1.isim,ogrenci_1.soyisim,ogrenci_1.numara,ogrenci_1.yas);
        printf("%s %s %d %d",ogrenci_2.isim,ogrenci_2.soyisim,ogrenci_2.numara,ogrenci_2.yas);
        
        return 0;
}
