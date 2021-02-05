#pragma once
#include <stdlib.h>

typedef struct Tda Tda;

void setTdaValue(Tda* tda, int val);
int getTdaValue(Tda* tda);
int getTdaId(Tda* tda);
Tda* createTda();
void deleteTda(Tda* tda);