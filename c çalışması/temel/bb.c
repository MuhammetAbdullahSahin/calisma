#include <stdio.h>
#include <stdlib.h>

void ustunu_al(int a, int b,int *can)
{
        int i;
        *can=1;
        for (i = 0; i < b; i++)
        {
                *can = *can * a;
        }
}

int main()
{
        int x,y,sonuc;
        printf("taban değeri\n");
        scanf("%d", &x);// & koymazsak çalışır değer alındıktan sonra kod biter
        printf("üst değeri\n");
        scanf("%d", &y);
        ustunu_al(x,y, &sonuc);//& "olmazsa üst değeri" "0" olarak çıktı verir hata vermez
        printf("%d", sonuc);
        return 0;
}
