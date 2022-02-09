# include <stdio.h>
# include <stdint.h>
#include <assert.h>
# include "libs/data_structures/vector/vector.h"

int main () {
    vector v = createVector(5);
    inputVector(&v,5);
    popBack(&v);
    outputVector(v);

    return 0;
    }