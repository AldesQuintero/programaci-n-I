#include <stdio.h> 

#include <stdlib.h> 

 

int main (void) 

{ 

    float a, b, c, d, f, media; 

    printf ("Ingrese el valor de a: "); 

    scanf ("%f", &a); 

    (void) getchar (); 

    printf ("Ingrese el valor de b: "); 

    scanf ("%f", &b); 

    (void) getchar (); 

    printf ("Ingrese el valor de c: "); 

    scanf ("%f", &c); 

    (void) getchar (); 

    printf ("Ingrese el valor de d: "); 

    scanf ("%f", &d); 

    (void) getchar (); 

    printf ("Ingrese el valor de f: "); 

    scanf ("%f", &f); 

    (void) getchar (); 

    media=(a+b+c+d+f)/5; 

    printf ("Valor de media: %g\n", media); 

    putchar ('\n'); 

    system ("pause"); 

    return EXIT_SUCCESS; 

} 