# include <stdio.h>
# include <stdint.h>
# include "libs/data_structures/vector/vector.h"

int main () {
    vector v = createVector(5);
    inputVector(&v,5);
    int x=9;
    pushBack(&v,x);
    outputVector(v);
    return 0;
    }