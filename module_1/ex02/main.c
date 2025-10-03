#include <stdio.h>

int main()
{
    long long ll = 123.456;
    int n = 789;
    char c = 0xAABBCC;

    long long *ptr_ll = &ll;
    int *ptr_n = &n;
    char *ptr_c = &c;

    /* %x exige cast (unsigned int), printf irá tentar converter para o formato correto
    *  %p não exige cast, já possui o formato correto
    */
    printf("1: 0x%x\t %p\t %lld\t %zu bytes\n", (unsigned int)&ll, &ll, ll, sizeof(long long));
    printf("1: 0x%x\t %p\t %p\t %zu bytes\n", (unsigned int)&ptr_ll, &ptr_ll, ptr_ll, sizeof(long long));
    printf("2: 0x%x\t %p\t %d\t %zu bytes\n", (unsigned int)&n, &n, n, sizeof(int));
    printf("2: 0x%x\t %p\t %p\t %zu bytes\n", (unsigned int)&ptr_n, &ptr_n, ptr_n, sizeof(int));
    printf("3: 0x%x\t %p\t %d\t %zu bytes\n", (unsigned int)&c, &c, c, sizeof(char));
    printf("3: 0x%x\t %p\t %p\t %zu bytes\n", (unsigned int)&ptr_c, &ptr_c, ptr_c, sizeof(char));
    return 0;
}