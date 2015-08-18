#include <stdio.h>
#include "calculadora.h"

int main (void)
  {
    int a,b,c;
    char op;
    printf("recibir a,b, operacion:\n A.suma \nB.Resta \nC.Multiplicacion \nD.division");
    scanf("%d %d %c",&a,&b,&op);

    switch(op)
    {
        case 'A':
            c=suma(a,b);
            printf("El resultado es %d",c);
            break;

        case 'B':
            c=resta(a,b);
            printf("El resultado es %d",c);
            break;

        case 'C':
            c=multiplicacion(a,b);
            printf("El resultado es %d",c);
            break;

        case 'D':
            c=division(a,b);
            printf("El resultado es %d",c);
            break;
    }

return(0);

  }
