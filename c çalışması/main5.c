#include <stdio.h>
#include <stdlib.h>

void kare(int *sonuc, int *can)//adresleme yaptık
{
        *sonuc = *can**can;// (*) adres değeri

}

int main()
{
        int x = 4, karesi;
        int sonucum;// sonucum değeri global değer olmuştur

        kare(&sonucum, &x);// ampersand (&) adresleme

        printf("%d", sonucum);

        return 0;
}


// int kare(int can)// adreslemesiz yaptık
// {
//         int sonuc = can*can;

//         return sonuc;// sonuç return edilmek zorunda
// }

// int main()
// {
//         int x = 4, karesi;

//         karesi = kare(x);

//         printf("%d", karesi);

//         return 0;
// }