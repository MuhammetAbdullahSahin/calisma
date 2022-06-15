#include <stdio.h>
#include <stdlib.h>

struct point {
        int x;
        int y;
};

struct point *point_create(int x, int y) // bellekten yer aldı "malloc" ile
{
        struct point *this =
                (struct point *)malloc(sizeof(struct point));

        this->x = x;
        this->y = y;

        return this;
}

void point_destroy(struct point *this) // bellekteki alanı temizledi "dree" ile
{
        free(this);
}

void point_print(const struct point *this) // değerleri yazdırdı
{
        printf("(%d,%d)\n", this->x, this->y);
}

#define COUNT_OF(array) (sizeof(array)/sizeof(array[0])) // define makrosu ile array içindeki eleman sayısını bulduk

void points_dump(const struct point points[], int nelem)
{
        for (int i = 0; i < nelem; i++)
                point_print(&points[i]);
}

void qsort(void *base, size_t nmemb, size_t size,
           int (*compar)(const void *, const void *));


int compare_by_x(const void *a, const void *b)
{
        struct point *p = (struct point *)a;
        struct point *q = (struct point *)b;

        if (p->x > q->x)
                return 1;
        else if (p->x < q->x)
                return -1;
        else
                return 0;
}

void points_sort(struct point points[], int nelem)
{
        qsort(points, nelem, sizeof(struct point), compare_by_x);
}


int main(void)
{
        struct point points[] = {
                { .x = 13, .y = 5  },
                { .x = -3, .y = 9  },
                { .x = 9,  .y = 1  },
                { .x = 3,  .y = -2 },
                { .x = 0,  .y = 19 },
        };

        printf("Unsorted points\n---------------------\n");
        points_dump(points, COUNT_OF(points));

        points_sort(points, COUNT_OF(points));

        printf("\nSorted points\n---------------------\n");
        points_dump(points, COUNT_OF(points));

        return 0;
}
