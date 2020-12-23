#include<math.h> 

#include<conio.h> 

    int marca,costo,impuesto; 

    int alemania, japon, italia, USA; 

main()  

    { 

     

        printf("\t\tDatos de automoviles de diferentes paises"); 

        printf("\nMarca de automovil de Alemania:" ); 

        scanf("%s",&alemania); 

        printf("\nMarcaa de automovil de Japon:" ); 

        scanf("%s",&japon); 

        printf("\nMarca de automovil de Italia:" ); 

        scanf("%s",&italia); 

        printf("\nMarca de automovil de U.S.A.:" ); 

        scanf("%s",&USA); 

        printf("\nIngrese precio del automovil de Alemania:" ); 

        scanf("%d", &alemania); 

        printf("\nIngrese precio del automovil de Japon:" ); 

        scanf("%d", &japon); 

        printf("\nIngrese precio del automovil de Italia:" ); 

        scanf("%d", &italia); 

        printf("\nIngrese precio del automovil de U.S.A:" ); 

        scanf("%d", &USA); 

        impuesto=alemania*20; 

        impuesto=japon*30; 

        impuesto=italia*15; 

        impuesto=USA*80; 

        printf("\nPorcentaje de Automovil de Alemania: %d", alemania ); 

        printf("\nPorcentaje de Automovil de Japon: %d", japon ); 

        printf("\nPorcentaje de Automovil de Italia: %d", italia ); 

        printf("\nPorcentaje de Automovil de U.S.A: %d", USA ); 

         

         

        getch(); 

         

} 

 