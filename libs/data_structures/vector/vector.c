#include "vector.h"
#include <stdio.h>
#include <malloc.h>

vector createVector(size_t n){
    int *arrayVector=NULL;
    if (n>0){
        arrayVector=(int *)malloc(sizeof(int)* n);
        if(arrayVector==NULL){
            fprintf(stderr, "bad alloc");
            exit(1);
        }
    }
    return (vector){arrayVector, 0, n};
}

