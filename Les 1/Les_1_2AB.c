#include <stdio.h>

//2A uitkomst orginele code *********---------
//2B ik heb simpelweg een enter in de loop toegevoegd


void print_function( char letter );
int ctr;
int main( void )
{
char star = '*';
char dash = '-';
for (ctr = 0 ; ctr < 10; ctr++ )
{
print_function( star );
print_function( dash );
printf("\n");
}
return 0;
}
void print_function ( char letter )
{
for ( ctr = 0; ctr < 9; ctr++) 
{
printf("%c", letter);
printf("\n");
}
}
