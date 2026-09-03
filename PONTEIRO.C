#include <stdio.h>

int main()
{
    int *ptr;
    int valor = 10;
    ptr = &valor;
    
    printf("Endereço = %x\n", &valor);
    printf("Endereço = %x\n", ptr);
    printf("Valor = %d\n", *ptr);
    printf("Endereço do ponteiro = %p\n", &ptr);
    return 0;
}
