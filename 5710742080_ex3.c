#include <stdio.h>

/* function main begins program execution */
int main( void )
{
    int x;
    int y;
    int i;
    int j;

/* prompt user for input */
    printf( "Enter two integers in the range 1-20: " );
    scanf( "%d%d", &x, &y ); /* read values for x and y */

    for ( i = x; i >=1 ; i-- ) { /* count from 1 to y */

        for ( j = y; j >=1; j-- ) { /* count from 1 to x */
        printf( "(%d,%d) ",i,j ); /* output @ */
        } /* end inner for */

    printf( "\n" ); /* begin new line */
    } /* end outer for */

return 0; /* indicate program ended successfully */
} /* end function main */

