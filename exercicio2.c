/* ex2 - verificação de direito a voto */
#include <stdio.h>

int main( void )
{
    int idade; 

    printf( "Digite sua idade: " );
    scanf( "%d", &idade );

    if ( idade >= 16 ) {
        printf( "Você já pode votar\n" );
    }

    if ( idade < 16 ) {
        printf( "Você ainda não pode votar\n" );
    }

    return 0;
}
