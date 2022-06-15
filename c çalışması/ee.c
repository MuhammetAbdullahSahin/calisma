#include <stdio.h>
#include <stdlib.h>

struct point {
        int x;
        int y;
};

struct point *point_create(int x, int y)
{
        struct point *this =
                (struct point *)malloc(sizeof(struct point));

        this->x = x;
        this->y = y;

        return this;
}

void point_destroy(struct point *this)
{
        free(this);
}

void point_print(const struct point *this)
{
        printf("(%d,%d)\n", this->x, this->y);
}

int main(void)
{
        struct point *p = point_create(3, 5);
        struct point *q = point_create(9, 7);

        point_print(p);
        point_print(q);

        point_destroy(p);
        point_destroy(q);

        return 0;
}
