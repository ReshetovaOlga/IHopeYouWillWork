# include <stdio.h>
# include <stdint.h>
#include <assert.h>
# include "libs/data_structures/vector/vector.h"

int main () {
/*    vector v = createVector(5);
    inputVector(&v,5);
    popBack(&v);
    outputVector(v);*/
    vector v = createVector (0) ;
    pushBack (&v, 10) ;

    assert (v.size == 1) ;

    popBack (&v);
    assert (v.size == 0) ;
    assert (v.capacity == 1) ;

    return 0;
    }