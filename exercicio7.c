/* ex7 validar se o mês existe*/
#include <stdio.h>

int main( void )
{
    int mes; 

    printf( "Digite o número do mês: " );
    scanf( "%d", &mes );

    if ( mes >= 1 && mes <= 12 ) {
        printf( "Mês válido\n" );
    } else {
        printf( "Mês inválido\n" );
    }

    return 0;
}
