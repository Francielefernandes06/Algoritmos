#include <stdio.h>


int fatorial(int n){
  printf("\nCalculando o fatorial de %d",n);
  int fat;
  if (n <= 1){
    return (1);
    
  }else{
    fat = n * fatorial(n-1);
    printf("\nfatorial de %d = %d",n,fat);
    return fat;
  }
}

int main(){

  int fatorialTeste= fatorial(10);
  printf("%d" , fatorialTeste);
// int n, i;
// printf("Digita o numero carai: ");
// scanf("%d", &n);

// for( i = 1;  n > 1; n = n - 1)
//   i = i * n;

// printf("\nTeu fatorial : %d", i);
return 0;
}