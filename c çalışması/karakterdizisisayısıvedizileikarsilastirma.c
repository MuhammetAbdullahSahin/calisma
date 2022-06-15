#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#define CHARDIZIBOYUT 10000

int karsilas(char dizi1[], char dizi2[])
{       
        int i, j, k;
        for (i = 0; dizi1[i] != '\0' && dizi2[i] != '\0'; i++)
        {
                for (j = 0; dizi1[i] != '\0' && dizi2[j] != '\0'; j++)
                {
                        if(dizi1[i] == dizi2[j])
                        {
                                k++;
                        }

                }    
        }
        

        return k;
}

int sayi(char dizi[])
{
        int i;
        for (i = 0; dizi[i] != '\0'; i++)
                ;
        


        return i;
}

int main()
{
        char metin1[CHARDIZIBOYUT];
        char metin2[CHARDIZIBOYUT];
        printf("Lutfen bir cumle yada kelime giriniz:\n");
        gets(metin1);
        printf("ilk cumle %s boyutu %d\n", metin1, sayi(metin1));
        printf("Lutfen bir cumle yada kelime giriniz:\n");
        gets(metin2);
        printf("%s metni ile %s metni içindeki ortak harfler %d\n", metin1, metin2, karsilas(metin1, metin2));

        return 0;
}
