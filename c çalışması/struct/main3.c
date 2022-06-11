#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{;
        float x_ekseni;
        float y_ekseni;

}nokta;// böyle bir tanımlamada strak içerisine yerleştirme yapacaksak struct ön eki kullanılmaz

int main()
{
        nokta can;
        can.x_ekseni=3.154561;
        can.y_ekseni=2.2642138;
        printf("X eksenimiz %.2f Y eksenimiz %.2f", can.x_ekseni, can.y_ekseni );


        return 0;
}
