/* ex3 - autenticação de PIN */
#include <stdio.h>

int main( void )
{
    int pin; 

    printf( "Digite o PIN: " );
    scanf( "%d", &pin );

    if ( pin == 9999 ) {
        printf( "Celular Desbloqueado\n" );
    }

    if ( pin != 9999 ) {
        printf( "PIN Incorreto\n" );
    }

    return 0;
}
