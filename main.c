# include <stdio.h>
# include <stdint.h>
# include "libs/data_structures/vector/vector.h"

int main () {
    vector v = createVector(5);
    inputVector(&v,3);
    outputVector(v);
    deleteVector(&v);
    outputVector(v);
    return 0;
    }