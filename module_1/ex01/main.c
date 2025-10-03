#include <stdio.h>

int main()
{

    int x = 5;
    int *ptr_x = &x;
    float y = *ptr_x + 3;

    int vec[] = {10, 20, 30, 40};
    int *ptr_vec = vec; // vec ou vec[0] é a mesma coisa
    int z = *ptr_vec;
    int h = *(ptr_vec + 3);

    printf("\n**Value of x and Y\n");
    printf("x: %d\n", x);
    printf("y: %2.f\n", y);

    printf("\n**Addresses (Hexadecimal) x,y and ptr_X\n");
    printf("x: %p\n", &x);
    printf("y: %p\n", &y);
    printf("ptr_x: %p\n", &ptr_x);

    printf("\n**The value of ptr_x\n");
    printf("ptr_x: %p\n", ptr_x);

    printf("\n**The value pointed by ptr_x \n");
    printf("ptr_x: %d\n", *ptr_x);

    printf("\n=============\n");

    printf("\n**The value of z and h\n");
    printf("z: %d\n", z);
    printf("h: %d\n", h);

    printf("\n**The addresses (in Hexadecimal) of vec and ptr_vec\n");
    printf("vec: %p\n", &vec);
    printf("ptr_vec: %p\n", &ptr_vec);

    printf("\n**The values of ptr_vec and vec\n");
    printf("ptr_vec: %p\n", ptr_vec);
    printf("vec: %p\n", vec);

    printf("\n**The value pointed by ptr_vec\n");
    printf("ptr_vec: %d\n", *ptr_vec);

    printf("\n=============\n");
    /*
     * O valor de vec está sendo atribuido para o apontador *ptr_vec
     * O ptr_vec está com o valor de memória do vec
     * O *ptr_vec está a apontar para vec (vec[0])
     * z recebe o valor de vec que está sendo apontado por *ptr_vec
     * h recebe o valor de vec na posição 4 (index3) apontado por *(ptr_vec + 3)
     * Como é um inteiro, o apontador irá pular 4 bytes a cada soma
     */

    int i;
    for (i = 0; i < 4; i++)
    {
        printf("1: %p,%d\t", &vec[i], vec[i]);
    }
    printf("\n");
    for (ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++)
    {
        printf("2: %p,%d\t", ptr_vec, *ptr_vec);
    }
    printf("\n");
    for (ptr_vec = vec + 3; ptr_vec >= vec; ptr_vec--)
    {
        printf("3: %p,%d\t", ptr_vec, *ptr_vec);
    }

    int a;
    printf("\n");
    ptr_vec = vec;
    printf("4: %p,%d\n", ptr_vec, *ptr_vec);
    a = *ptr_vec++;
    printf("5: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    ptr_vec = vec;
    a = (*ptr_vec)++;
    printf("6: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    ptr_vec = vec;
    a = *++ptr_vec;
    printf("7: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    ptr_vec = vec;
    a = ++*ptr_vec;
    printf("8: %p,%d,%d\n", ptr_vec, *ptr_vec, a);
    printf("\n");
    for (ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++)
    {
        printf("9: %p,%d\t", ptr_vec, *ptr_vec);
    }

    printf("\n");
    unsigned int d = 0xAABBCCDD;
    printf("10: %p,%x\t", &d, d);
    printf("\n");
    unsigned char *ptr_d = (unsigned char *)&d;
    unsigned char *p;
    for (p = ptr_d; p < ptr_d + sizeof(unsigned int); p++)
    {
        printf("11: %p,%x\t", p, (unsigned char)*p);
    }
    return 0;
}