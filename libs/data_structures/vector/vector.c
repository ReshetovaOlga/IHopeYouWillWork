#include "vector.h"
#include <stdio.h>
#include <malloc.h>

vector createVector(size_t n) {
    int *arrayVector = NULL;
    if (n > 0) {
        arrayVector = (int *) malloc(sizeof(int) * n);
        if (arrayVector == NULL) {
            fprintf(stderr, "bad alloc");
            exit(1);
        }
    }
    return (vector) {arrayVector, 0, n};
}

size_t min(size_t a, size_t b) {
    return a < b ? a : b;
}

void reserve(vector *v, size_t newCapacity) {
    if (newCapacity == 0)
        *v = (vector) {NULL, 0, 0};
    else {
        int *newVector = NULL;
        newVector = (int *) realloc(v->data, sizeof(int) * newCapacity);
        if (newVector == NULL) {
            fprintf(stderr, "bad alloc");
            exit(1);
        }
        size_t newSize = min(v->size, newCapacity);
        *v=(vector){newVector, newSize, newCapacity};
    }
}

