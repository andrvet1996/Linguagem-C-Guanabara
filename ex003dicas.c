#import <stdio.h>
#import <locale.h> //usada para números decimais
 void main(){
     setlocale(LC_ALL,"Portuguese");
     float n;
     printf("Digite um numero real: ");
     scanf("%f",&n);
     printf("Voce digitou o numero %.1f", n);
 }
