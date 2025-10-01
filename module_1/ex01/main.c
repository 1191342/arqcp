#include <stdio.h>

int main(){

    int x = 5;
    int* ptr_x = &x;
    float y = *ptr_x + 3;
    int vec[] = {10, 20, 30, 40};
    int* ptr_vec = vec;
    int z = *ptr_vec;
    int h = *(ptr_vec + 3);

    printf("x: %d and y: %f\n", x, y);
    printf("Hexadecimal\n x: %p, y: %p and ptr_x: %p\n", &x, &y, &ptr_x);
    printf("Value ptr_x: %p\n", ptr_x);
    printf("Value pointer ptr_x: %d\n", *ptr_x);
    printf("\n=============\n");
    printf("Value of z: %d and h: %d\n", z, h);
    printf("The addresses (in Hexadecimal)\nvec: %p and ptr_vec: %p\n", vec, &ptr_vec);
    printf("The value of ptr_vec: %p and vec: %p\n", ptr_vec, vec);
    printf("The value pointed by ptr_vec: %d\n", *ptr_vec);

    /*
     * O valor de vec está sendo atribuido para o apontador *ptr_vec
     * O ptr_vec está com o valor de memória do vec
     * O *ptr_vec está a apontar para vec (vec[0])
     * z recebe o valor de vec que está sendo apontado por *ptr_vec
     * h recebe o valor de vec na posição 4 (index3) apontado por *(ptr_vec + 3)
     * Como é um inteiro, o apontador irá pular 4 bytes a cada soma
     */

    int i;
    for(i = 0; i < 4; i++){
        printf("vec[%d] = %d\n", i, *(ptr_vec + i));
    }

    return 0;
}