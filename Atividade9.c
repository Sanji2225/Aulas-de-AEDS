/**#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
   
   system("chcp 65001 > null");

 float A, B, C, delta, X1, X2;

   printf("Coloque os coeficientes A, B e C da função: \n");
     scanf("%f %f %f", &A, &B, &C);

    printf("Sua função é: \n %.0fX^2+%.0fX+%.0f", A, B, C);

    delta=(B*B)-(4*A*C);
     if(delta>0){
    X1=-B+sqrt(delta)/2*A;
    X2=-B-sqrt(delta)/2*A;
      if(delta==0){
        printf("A sua funçao possui raizes iguais, e são: \n Raizes:%.2f", X1);
      }
       else{
       printf("\n E suas raizes são:\n X1:%.2f X2:%.2f", X1, X2);
         }
       }
  else{
       printf("\nA função não possui raizes reais.\n");
    
    }








  return 0;
}**/