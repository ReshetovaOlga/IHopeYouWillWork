#include <stdlib.h>

//теперь ты будешь работать?
typedef struct vecto {
    int *data; //указатель на элементы вектора
    size_t size; //размер вектора
    size_t capacity; //вместимость вектора
} vector;


