# include <stdio.h>
# include <stdint.h>
# include "libs/data_structures/vector/vector.h"

/*данные для ввода

 1 2 3
 1 2 3 4 5
 1 2 3 4 5 6 7



 */

void test_reserve_newSizeLess(){
    vector v = createVector(5);
//    vector reserveLess = inputVector(&v,3);
    outputVector(v);
}

void test_reserve_newSizeEquals(){
    vector v = createVector(5);
    inputVector(&v,5);
    outputVector(v);
}

void test_reserve_newSizeMore(){
    vector v = createVector(5);
    inputVector(&v,7);
    outputVector(v);
}

void test_reserve(){
    void test_reserve_newSizeLess();
    void test_reserve_newSizeEquals();
    void test_reserve_newSizeMore();
}

void test(){
    void test_reserve();
}
int main () {
    test();
    return 0;
    }