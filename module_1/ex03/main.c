#include <stdio.h>
void swap_nums(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void swap_pointers(char **x, char **y)
{

    char *tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
int main()
{
    int a = 3, b = 4;
    char *s1, *s2;

    swap_nums(&a, &b);

    printf("a is %d\n", a);
    printf("b is %d\n", b);

    s1 = "I should print second";
    s2 = "I should print first";

    /**
     * como s1 e s2 são ponteiros eu preciso passar o endereço de memoria
     * Em C, quando tens o endereço de uma variável de um certo tipo T, o tipo desse endereço é T *.
     * como neste caso é char*, T = char* então o endereço dele é do tipo (char*)* === char**
     */
    swap_pointers(&s1, &s2);

    printf("s1 is %s\n", s1);
    printf("s2 is %s\n", s2);

    return 0;
}