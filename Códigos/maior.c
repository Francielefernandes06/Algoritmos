#include <stdio.h>

main() {
   int value=0, value2 = 0;
   printf("Digite um valor: ");
   scanf("%d",&value );
   printf("Digite um segundo valor: ");
   scanf("%d", &value2);
   if(value2>value)
   printf("%d é maior",value2);
   else if (value>value2)
   printf("%d é maior",value);
   else
   printf("Error");

}