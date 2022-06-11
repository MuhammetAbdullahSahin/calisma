#include <stdio.h>
#include <stdlib.h>

int main()
{
        char cumle[101];
        char *p1, *p2;
        int kontrol;

        printf("max 100 karaakterli cunle girin\n");
        gets(cumle);

        for(p2=cumle; *p2; *p2++);
                p2--;

        kontrol = 1;

        for(p1=cumle; kontrol && p1 < p2; p1++, p2--)
        {
                if(*p1 != *p2)
                {
                        kontrol = 0;
                }
        }
        if(kontrol)
        {
                printf("Girilen %s bir palendomdur", cumle);
        }
        else
        {
                printf("Girilen %s bir palendom degil", cumle);
                //printf("Girilen %s bir palendom degil");// %s ye bir değer atamazsam cümlenin devamı gözukmez hata vermez
        }
        
        return 0;
}
