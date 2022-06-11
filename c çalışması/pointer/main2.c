#include <stdio.h>
#include <stdlib.h>

void degistir(int *ad1, int *ad2)
{
        int gecici;
        gecici = *ad1;
        *ad1 = *ad2;
        *ad2 = gecici;
}
// adres ile gönderilirse global olarak değer değiştirmiş oluruz eğer adressiz bir şekilde gönderirsek değerler sadece fonksiyon içerisinde kalır yani local olur
int main()
{
        int a = 10, b = 20;
        printf("cagırmadan once %d %d\n", a, b);
        degistir(&a,&b);
        printf("cagırdiktan sonra %d %d\n", a, b);

        return 0;
}
