int main(){
float calculo;
float peso, alt;
printf ("Seu IMC é.\n\n");
printf("___________________\n");
calculo = 0;
printf("Calculando o IMC.\n\n");
printf("Digite o seu peso:\n");
scanf("%d", &peso);
printf("Digite a sua altura:\n");
scanf("%d", &alt);
calculo = peso/(alt*alt);
  
system("cls || clear");
printf("\n IMC = %.2f \n", calculo);
printf("--------------------\n");
  return 0;
}