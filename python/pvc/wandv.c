#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int weight;
    int value;
    float quality;
} item;

int compare(const void *item1, const void *item2)
{
    item *i1 = (item *) item1;
    item *i2 = (item *) item2;

    if (i1->quality > i2->quality) return 1;
    if (i1->quality < i2->quality) return -1;
    return 0;
}


item *items_by_quality(int *weights, int *values, int n)
{
    item *ibq = (item *) malloc(sizeof(item) * n);

    for (int i=0; i<n; i++) {
        ibq[i].weight = weights[i];
        ibq[i].value = values[i];
        ibq[i].quality = (float) values[i] / weights[i];
    }

    qsort(ibq, n, sizeof(item), compare);

    return ibq;
}
        

int main()
{
    int n = 100;
    int *weights;
    int *values;

    weights = (int *) malloc(sizeof(int) * n);
    values = (int *) malloc(sizeof(int) * n);

    for (int i=0; i<n; i++) {
        weights[i] = 1 + (lrand48() % 1000);
        values[i] = 1 + (lrand48() % 1000);
    }

    item *ibq = items_by_quality(weights, values, n);

    for (int i=0; i<n; i++) printf("%f, %d, %d\n", ibq[i].quality, ibq[i].weight, ibq[i].value);
}
        
