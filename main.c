#include "tda.h"
#include <stdio.h>

int main(void){
    printf("TDA exemple\n");

    Tda* tda = createTda();

    printf("Sizeof TDA main : %ld\n", sizeof(tda));

    //printf("Tda id : %d", tda->id); // Compile error type incomplete
    printf("Tda id : %d\n", getTdaId(tda));

    //tda->value = 12; // Error
    setTdaValue(tda, 12);

    printf("Tda value : %d\n", getTdaValue(tda));

    deleteTda(tda);
}