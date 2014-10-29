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

i = 1;
while(  i <= y) {

/* count from 1 to y */

j = 1;
while(  j <= x) { /* count from 1 to x */
printf( "@" );
 j++ ;
 /* output @ */
} /* end inner for */
i++;
printf( "\n" ); /* begin new line */
} /* end outer for */

return 0; /* indicate program ended successfully */
} /* end function main */

