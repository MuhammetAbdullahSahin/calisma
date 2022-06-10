#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(void)
{
        char can[100];
        printf("text girin\n");
        //scanf("%s", &can); // boşluk gördüğünde okumayı bırakır
        fgets(can, sizeof(can), stdin);
        printf("girilen text %s\n", can);
        printf("küçük hali %s\n",strlwr(can));

        /*
        char can[100];
        printf("text girin\n");
        scanf("%s", &can);

        printf("girilen text %s\n", can);
        printf("küçük hali %s\n",strlwr(can));
        */

        /*
        char can[100];
        printf("text girin\n");
        scanf("%s", &can);

        printf("girilen text %s\n", can);
        printf("ters hali %s\n",strrev(can));
        */

        /*
        char name[30];
        printf("isim girin");
        // gets(name);
        fgets(name, sizeof(name), stdin)
        printf("%s", name)
        */


        /*
        char can[100];
        char canan[100];
        int a;

        printf("lütfen bir yazı giriniz\n");
        scanf("%s", &can);

        printf("lütfen ikinci yazı girin\n");
        scanf("%s", &canan);

        printf("birinci yazının sonuna kaç karakter eklemek istersiniz\n");
        scanf("%s", &a);

        printf("birleştirmeden önce %s\n", can);
        printf("birleştirmeden sonra %s\n", strncat(can,canan,a));
        */


        /*
        char bos[100];

        strcpy(bos,"Benim");
        strcat(bos," adim");// dizileri birleştirir
        strcat(bos, " can");
        printf("%s", bos);

        char can[]="Benim adim can boz";
        char canan[100]= "";// strncpy de boş strink yapmak gerekir

        strncpy(canan,can, 7);// canana canın 7 karakterini kopyalar

        printf("%s",canan);
        */

        /*
        char can[]="Benim adim can boz";
        char canan[100];

        strcpy(canan,can);// canana canı kopyalar

        printf("%s",canan);
        */

        /*
        int sonuc;
        char can[15]= "abcdef";
        char canan[15]= "ABCDEF";
        sonuc = strncmp(can,canan,4);// ilk dört karakteri kontrol ettik ve can > canan sa 1 değilse -1 // acii deki değere bakılıyor
        printf("%d\n", sonuc);
        if (sonuc<0)
        {
                printf("Can < canan");
        }else if (sonuc>0)
        {
                printf("Can > canan");
        }else
        {
                printf("Can = canan");
        }
        */
        
        /*
       int sonuc;
       char can[15]= "abcdef";
       char canan[15]= "ABCDEF";
       sonuc = strcmp(can,canan);// can > canan sa 1 değilse -1
       printf("%d\n", sonuc);
       if (sonuc<0)
       {
               printf("Can < canan");
       }else if (sonuc>0)
       {
               printf("Can > canan");
       }else
       {
               printf("Can = canan");
       }
        */
        
        

        /*
        char can[]= "aralik";

        printf("karakter dizimizin boyu %d\n", strlen(can));// \0 karekterini saymaz
        printf("karakter dizimizin boyu %d", sizeof(can));// \0 karekterini sayar



        char can[] = {'c', 'a', 'n', 'a', 'n', '\0'};
        char dizi[] = "canan";
        char kullanıcı[100];

        printf("%s", can);

        printf("bir karakter dizisi girin\n");
        scanf("%s", &kullanıcı);
        printf("%s", kullanıcı);
        */


        /*
        int mat[2][3][2];
        int i, j, k;

        printf("Lütfen 12 adet sayı girin\n");

        for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        for (k = 0; k < 2; k++)
                        {
                                scanf("%d",&mat[i][j][k]);
                        }
                     
                }
             
        }

        printf("Girilen değerler\n");
        for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        for (k = 0; k < 2; k++)
                        {
                                printf("mat[%d][%d][%d] = %d\n", i, j, k, mat[i][j][k]);
                        }
                     
                }
             
        }
        */


        /*
        int mat1[3][4] = {{1,2,5,7},{5,4,8,6},{7,1,5,6}};
        int mat2[3][4] = {{1,8,5,7},{1,2,4,6},{3,7,3,1}};
        int top[3][4];
        int i, j;

        for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 4; j++)
                {
                        top[i][j] = mat1[i][j] + mat2[i][j];
                }
             
        }

        for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 4; j++)
                {
                        printf("%4d", top[i][j]);
                }
                printf("\n\n");
        }
        */
        

        /*
        int mat[10][10];
        int i,j;
        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
                {
                        if (i == j)
                        {
                                mat[i][j] = 1;
                        }else{
                                mat[i][j] = 0;
                        }
                     
                }
             
        }
        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
                {
                        printf("%4d", mat[i][j]);
                }
                printf("\n\n");
        }
        */


        /*
        int can[2][2] = {{1,2},{3,4}};
        int i, j;
        for ( i = 0; i < 2; i++)
        {
                for ( j = 0; j < 2 ; j++)
                {
                        printf("%d\n",can[i][j]);
                }
             
        }
        

        printf("%d",can[0][0]);
        */


        /*
        int i, odd[20];
        for(i = 1; i<=20; i++){
                odd[i] = (2*i) - 1;

        }
        for (i = 1; i <= 20; i++)
        {
                printf("%d ", odd[i]);
        }
        /*
     


        /*
        int abdullah[5] = {1, 3, 5, 7, 9};
        printf("%d ", abdullah[4]);


        int i,j;

        for (i = 'A'; i <= 'Z'; i++)
        {
                printf("%c ",i);
        }

        for (j = 'a'; j <= 'z'; j++)
        {
                printf("%c ",j);
        }
        */
        
        /*
        float sayi = (float)9/4;
        printf("%f", sayi);

        int sayi = 9/4;
        printf("%d", sayi);
        */

        /*
        printf("%f\n",ceil(4.3));//bir üstüne yuvarlama yapar
        printf("%f\n",floor(4.3));//tabana yuvarlar
        printf("%f\n",sqrt(81));// kare kök hesabı
        printf("%f\n",pow(5,2));// üslü işlem
        printf("%d\n",abs(-15));// int sayınınmutlak değerini alır
        */

       /*
       bool x = true;
       printf("%d", x);
        */
        return 0;
}
