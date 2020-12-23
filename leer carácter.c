#include <conio.h> 

#include <stdio.h> 

   

int 

main ()  

{ 

   

char vocal, consonante, numero; 

   

 printf( "  Introduzca un c: " ); 

    scanf( "%s", &vocal); 

 

    if ( vocal == 'a' || vocal == 'A' || 

         vocal == 'e' || vocal == 'E' || 

         vocal == 'i' || vocal == 'I' || 

         vocal == 'o' || vocal == 'O' || 

         vocal == 'a' || vocal == 'U' ) 

        printf( "\n ES UNA VOCAL \n "); 

    else 

        printf( " \n NO ES UNA VOCAL \n " ); 

     

         

         printf( "\n Introduzca una consonante:\n  " ); 

    scanf( "%s", &consonante ); 

     

     if (consonante == 'b' || consonante == 'B' || 

         consonante == 'c' || consonante == 'C' || 

         consonante == 'd' || consonante == 'D' || 

         consonante == 'f' || consonante == 'F' || 

         consonante == 'g' || consonante == 'G' || 

         consonante == 'h' || consonante == 'H' || 

         consonante == 'j' || consonante == 'J' || 

         consonante == 'k' || consonante == 'K' ||        

         consonante == 'l' || consonante == 'L' ||         

         consonante == 'm' || consonante == 'M' ||         

         consonante == 'n' || consonante == 'N' ||         

         consonante == 'p' || consonante == 'P' ||         

         consonante == 'q' || consonante == 'Q' ||         

         consonante == 'r' || consonante == 'R' ||         

         consonante == 's' || consonante == 'S' )       

        printf( " \n ES UNA CONSONANTE \n " ); 

    else 

        printf( "\n  NO ES UNA CONSONANTE \n " ); 

         

         

         printf( "\n Introduzca un numero:  " ); 

    scanf( "%s", &numero ); 

 

    if ( numero == '1' || numero == '1' || 

         numero == '2' || numero == '2' || 

         numero == '3' || numero == '3' || 

         numero == '4' || numero == '4' || 

         numero == '5' || numero == '5' || 

         numero == '6' || numero == '6' || 

         numero == '7' || numero == '7' || 

         numero == '8' || numero == '8' || 

         numero == '9' || numero == '9' ) 

        printf( "\n   ES UN NUMERO " ); 

    else 

        printf( "\n   NO ES UN NUMERO " ); 

        getch(); /* Pausa */ 

  

return 0; 

 

} 

 