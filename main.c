# include <stdio.h>
# include <stdint.h>
# include "libs/data_structures/vector/vector.h"



int main () {
    vector v = createVector(5);
    inputVector(&v,3);
    outputVector(v);
    return 0;
    }