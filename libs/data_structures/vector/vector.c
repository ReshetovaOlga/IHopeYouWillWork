#include "vector.h"
#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include <assert.h>

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
        *v = (vector) {newVector, newSize, newCapacity};
    }
}

void inputVector(vector *v, size_t size) {
    if (size > v->capacity)
        reserve(v, size);
    for (size_t i = 0; i < size; i++) {
        scanf("%d", &v->data[i]);
    }

    v->size = size;
}

void outputVector(vector v) {
    if (v.size == 0)
        printf("{}\n");
    else {
        printf("{");
        for (size_t i = 0; i < v.size; i++)
            printf("%d ", v.data[i]);
        printf("\b}\n");
    }
}

void clear(vector *v) {
    v->size = 0;
}

void shrinkToFit(vector *v) {
    reserve(v, v->size);
}

void deleteVector(vector *v) {
    free(v->data);
    reserve(v, 0);
}

bool isEmpty(vector *v) {
    return v->size == 0;
}

bool isFull(vector *v) {
    return v->size == v->capacity;
}

int getVectorValue(vector *v, size_t i) {
    assert(i < v->size);
    assert(i>=0);
    return v->data[i];
}

void pushBack(vector *v, int x) {
    if (v->capacity == 0)
        reserve(v,1);
    else if (v->size == v->capacity)
        reserve(v, v->capacity*2);
    v->data[v->size++]=x;
}

void popBack(vector *v) {
    if (v->size == 0) {
        fprintf(stderr, "bad alloc");
        exit(1);
    } else
        v->size--;
}

int *atVector(vector *v, size_t index) {
    if (index < 0 || index > v->size) {
        fprintf(stderr, "IndexError: a[index] is not exists");
        exit(1);
    }
    return &v->data[index];
}

int *back(vector *v) {
    return &v->data[v->size - 1];
}

int *front(vector *v) {
    return &v->data[0];
}