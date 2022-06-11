#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

// int ile başlayan foksiyonlar bir değer döndürür dödürdüğü değere göre main de işlem yapılır
int tekmiciftmi(int can)
{
        if(can%2==0)
        {
                return 1;
        }
        else{
                return 0;
        }


}


int main()
{
        int sayi, sonuc;
        printf("sayi gir");
        scanf("%d", &sayi);
        sonuc=tekmiciftmi(sayi);

        if(sonuc==1)
        {
                printf("sayı cift");
        }
        if(sonuc==0)
        {
                printf("sayi tek");
        }


        return 0;
}


////void ile başlayan fonksiyonlar bir değer döndürmez değer döndürmediği için işlemler void içinde yapılır
// void tekmiciftmi(int can)
// {
//         if(can%2==0){
//                 printf("sayi cift");
//         }
//         else{
//                 printf("sayi tek");
//         }


// }


// int main()
// {
//         int sayi;
//         printf("sayi gir");
//         scanf("%d", &sayi);
//         tekmiciftmi(sayi);



        
//         /*
//         int sayi;
//         printf("sayi gir");
//         scanf("%d", &sayi);
//         if(sayi%2==0){
//                 printf("sayi cift");
//         }
//         else{
//                 printf("sayi tek");
//         }
//         */


//         return 0;

// }
