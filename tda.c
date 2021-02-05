#include "tda.h"

#include <stdio.h>

struct Tda
{
    int data;
    int id;
    int value;
};

struct Tda* createTda(void)
{
    struct Tda* self = malloc(sizeof(struct Tda));

    if (self != NULL)
    {
        static const Tda o = {
            .id = 1,
            .value = 0
        };
        printf("Sizeof TDA tda.c : %ld\n", sizeof(struct Tda));
        *self = o;
    }
    return self;
}

void deleteTda(Tda* obj)
{
    if (obj != NULL)
    {
        printf("Suppression de objet id : %d\n", obj->id);
    }
    free(obj);
}

int getTdaId(Tda* tda){
    return tda->id;
}

void setTdaValue(Tda* tda, int val){
    tda->value = val * 2;
}

int getTdaValue(Tda* tda){
    return tda->value;
}