#include <stdio.h>

int main()
{
    float p, h, IMC;
    
    printf("\nQuanto você pesa (medida em Kilogramas)?\n");
    scanf("%f",&p);
    
    printf("\nQual é a sua altura em metros?\n");
    scanf("%f",&h);
    
    IMC =(p/(h*h));
    
    printf("Seu IMC foi %f", IMC);
       if (IMC < 26){
            printf("O seu Indice de Massa Corporea é %.2f e esta Normal\n", IMC );
            }
            
        if (IMC >=26 &&  IMC<30){
           printf ("O seu Indice de Massa Corporea é %.2f e voce esta Obeso\n", IMC);
           }
        
        if (IMC >=30){
           printf("O seu Indice de Massa Corporea é %.2f e voce esta com Obesidade Morbida\n", IMC);
            }
    return 0;
}