//
// Created by elen_ on 06.02.2022.
//

#ifndef MARGARITATHEBEST_VECTOR_H
#define MARGARITATHEBEST_VECTOR_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct vector{
    int *data; //указатель на элементы вектора
    size_t size; //размер вектора
    size_t capacity; //вместимость вектора
} vector;

//1 возвращает структуру-дескриптор из n значений.
vector createVector(size_t n);

//2 изменяет количество памяти, выделенное под хранение элементов вектора
//void reserve(vector *v, size_t newCapacity);
/*
//3 удаляет элементы из контейнера, но не освобождает выделенную память
void clear(vector *v){}

//4 освобождает память, выделенную под неиспользуемые элементы
void shrinkToFit(vector *v){}

//5 освобождает память, выделенную вектору.
void deleteVector(vector *v){}

//6 проверяет, является ли вектор пустым
bool isEmpty(vector *v){}

//7 проверяет, является ли вектор полным
bool isFull(vector *v){}

//8 возвращает i-ый элемент вектора v
int getVectorValue(vector *v, size_t i){}

//9 добавляет элемент x в конец вектора v
void pushBack(vector *v, int x){}

//10 удаляет последний элемент из вектора
void popBack(vector *v){}

//11 возвращает указатель на index-ый элемент вектора
int* atVector(vector *v, size_t index){}

//12 возвращает указатель на последний элемент вектора
int* back(vector *v){}

//13 возвращает указатель на нулевой элемент вектора
int* front(vector *v){}
*/
#endif //MARGARITATHEBEST_VECTOR_H