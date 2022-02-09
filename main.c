#include <assert.h>
#include "libs/data_structures/vector/vector.h"

//popBack удаляет последний элемент из вектора
void test_popBack_notEmptyVector() {
    vector v = createVector(0);
    pushBack(&v, 10);
    assert(v.size == 1);
    popBack(&v);
    assert(v.size == 0);
    assert(v.capacity == 1);
    deleteVector(&v);
}

void test_popBack_() {
    vector v = createVector(3);
    v.size = 3;
    popBack(&v);
    assert(back(&v) == &v.data[1]);
    deleteVector(&v);
}

//shrinkToFit освобождает память, выделенную под неиспользуемые элементы
void test_shrinkToFit_emptyVector() {
    vector v = createVector(3);
    v.size = 3;
    v.capacity = 5;
    shrinkToFit(&v);
    assert(v.capacity == 3);
    deleteVector(&v);
}

void test_shrinkToFit_fullVector() {
    vector v = createVector(0);
    shrinkToFit(&v);
    assert(v.capacity == 0);
    deleteVector(&v);
}

//pushBack добавляет элемент x в конец вектора v
void test_pushBack_emptyVector() {
    vector v = createVector(0);
    pushBack(&v, 5);
    assert(v.data[0] == 5);
    assert(v.size == 1);
    assert(v.capacity == 1);
    deleteVector(&v);
}

void test_pushBack_fullVector() {
    vector v = createVector(3);
    v.size = 3;
    pushBack(&v, 42);
    assert(v.data[3] == 42);
    assert(v.size == 4);
    assert(v.capacity == 6);
    deleteVector(&v);
}

//isFull проверяет, является ли вектор полным
void test_isFull_full() {
    vector v = createVector(0);
    assert(isFull(&v) == true);
    deleteVector(&v);
}

void test_isFull_notFull() {
    vector v = createVector(5);
    v.size = 1;
    assert(isFull(&v) == false);
    deleteVector(&v);
}

//atVector возвращает указатель на index-ый элемент вектора
void test_atVector_notEmptyVector() {
    vector v = createVector(3);
    v.size = 3;
    assert(atVector(&v, 2) == &v.data[2]);
    deleteVector(&v);
}

//back возвращает указатель на последний элемент вектора
void test_back() {
    vector v = createVector(5);
    v.size = 5;
    assert(back(&v) == &v.data[4]);
    deleteVector(&v);
}

//front возвращает указатель на нулевой элемент вектора
void test_front() {
    vector v = createVector(5);
    v.size = 5;
    assert(front(&v) == &v.data[0]);
    deleteVector(&v);
}

//getVectorValue возвращает i-ый элемент вектора v
void test_getVectorValue(){
    vector v = createVector(2);
    v.size = 1;
    pushBack(&v, 10);
    assert(getVectorValue(&v, 1) == 10);
    deleteVector(&v);
}

//isEmpty проверяет, является ли вектор пустым
void test_isEmptyEmptyVector(){
    vector v = createVector(2);
    v.size = 1;
    pushBack(&v, 10);
    isEmpty(&v);
    assert(isEmpty(&v) == 0);
    deleteVector(&v);
}

void test_isEmptyNotEmptyVector(){
    vector v = createVector(2);
    v.size = 0;
    isEmpty(&v);
    assert(isEmpty(&v) == 1);
    deleteVector(&v);
}

void test() {
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
    test_popBack_notEmptyVector();
    test_popBack_();
    test_shrinkToFit_emptyVector();
    test_shrinkToFit_fullVector();
    test_isFull_full();
    test_isFull_notFull();
    test_atVector_notEmptyVector();
    test_back();
    test_front();
    test_getVectorValue();
    test_isEmptyEmptyVector();
    test_isEmptyNotEmptyVector();
}
int main() {
    test();
    return 0;
}
