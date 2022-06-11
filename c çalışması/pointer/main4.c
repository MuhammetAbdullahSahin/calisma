#include <stdio.h>
#include <stdlib.h>

int main()
{
        int arr[] = {10, 20, 30, 40, 50};
        // 10 600000 de ise 20 600004 30 600008 40 600012 50 600016 da bulunur çünkü int 4 byte yer tutar. pointer değeri atasak ve bu ptr olsa ptr 600000 ise ptr + 1 600004 olur.
        int *ptr;

        ptr = arr; // &arr[0] ve arr ataması arasında fark yok
        
        printf("ilk eleman %d\n", ptr);
        ptr++;
        printf("ikinci eleman %d\n", ptr);
        printf("ucuncu eleman %d\n", ptr+1);// ptr++ ve (ptr + 1) aynı şeyi ifade eder
//ilk eleman         2084568464
//ikinci eleman      2084568468
//ucuncu eleman      2084568472

        return 0;
}
