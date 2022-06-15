#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#define MAXSIZE 10000
//çıktısı:
// Lutfen bir cumle yada kelime giriniz:
// melih artar
// ilk cumle melih artar boyutu 11
// Lutfen bir cumle yada kelime giriniz:
// melih artar 
// melih artar metni ile melih artar metni içindeki ortak harfler 11

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
                                break;
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
        char metin1[MAXSIZE];
        char metin2[MAXSIZE];
        printf("Lutfen bir cumle yada kelime giriniz:\n");
        gets(metin1);
        printf("ilk cumle %s boyutu %d\n", metin1, sayi(metin1));
        printf("Lutfen bir cumle yada kelime giriniz:\n");
        gets(metin2);
        printf("%s metni ile %s metni içindeki ortak harfler %d\n", metin1, metin2, karsilas(metin1, metin2));

        return 0;
}
