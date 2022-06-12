#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
        char isim[10];
        float x_ekseni;
        float y_ekseni;
}nokta;

void ekranayazdir(nokta p[], int n) 
{
        int i;
        for(i = 0; i < n; i++)
        {
                printf("%s = (%f, %f)\n", p[i].isim, p[i].x_ekseni, p[i].y_ekseni);
        }
}

int main()
{
        nokta can[5]={{"a",3,8},{"b",5,8},{"c",4,3},{"d",8,7},{"e",10,7}};

        ekranayazdir(can,5);
        
        return 0;
}