#include <stdio.h>

int main()
{
    int contador = 1; // iniciamos en 1 para que no tenga valores basura


    while (contador <= 5) // la condicion se cumple mientras contador sea menor o igual a 5
    {
        printf("Contador: %d\n", contador); // mostramos el valor actual de contador
        contador++; // incrementamos el contador en 1
    }

    return 0;
}
