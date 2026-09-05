/* ex6 bonus salarial */
#include <stdio.h>

int main( void )
{
    int salario; 

    printf( "Digite o salário: " );
    scanf( "%d", &salario );

    if ( salario <= 1500 ) {
        printf( "Novo salário (com bônus): %d\n", salario + 200 );
    } else {
        printf( "Salário: %d - Sem bônus\n", salario );
    }

    return 0;
}
