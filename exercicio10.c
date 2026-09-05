/* ex10- ano bissexto */
#include <stdio.h>

int main( void )
{
    int ano; 

    printf( "Digite um ano: " );
    scanf( "%d", &ano );

    if ( ano % 4 == 0 ) {
        printf( "Pode ser ano bissexto\n" );
    } else {
        printf( "Não é ano bissexto\n" );
    }

    return 0;
}
