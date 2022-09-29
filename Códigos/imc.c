#include<stdio.h>

main(){

int peso=0;         
float imc=0 , altura=0;
printf("Digite sua peso: ");
scanf("%d",&peso);
printf("Qual sua altura? ");
scanf("%f", &altura);
imc= peso/(altura*altura);
if (imc<18.5)
printf("Seu IMC e %.2f kg/m2, voce esta abaixo do peso",imc);
else if (imc>=18.5 && imc<=24.9)
printf("Seu IMC e %.2f kg/m2, você esta no peso normal",imc);
else if (imc>=25 && imc<=29.9)
printf("Seu IMC e %.2f kg/m2, você esta acima do peso",imc);
else if (imc>=30 && imc<=34.9)
printf("Seu IMC e %.2f kg/m2, você esta com obesidade grau 1",imc);
else if (imc>=35 && imc<=39.9)
printf("Seu IMC e %.2f kg/m2, você esta com obesidade grau 2",imc);
else if (imc>=40)
printf("Seu IMC e %.2f kg/m2, você esta com obesidade grau 3",imc);
else
printf("Erro");
}
