#include<stdio.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome1[20], nome2[20],nome3[20];
    char sexo1,sexo2,sexo3;
    float nota1,nota2,nota3;
    printf("\nCadastrando a primeira pessoa:\n");
    printf("++++++++++++++++++++++++++++++\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome1);
    printf("SEXO: [M/F] ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f",&nota2);
    printf("\nCadastrando a segunda pessoa:\n");
    printf("++++++++++++++++++++++++++++++\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome2);
    printf("SEXO: [M/F] ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f",&nota2);
    printf("\nCadastrando a terceira pessoa:\n");
    printf("++++++++++++++++++++++++++++++\n");
    fflush(stdin);
    printf("NOME: ");
    gets(nome3);
    printf("SEXO: [M/F] ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f",&nota3);
    printf("\n\LISTAGEM COMPLETA");
    printf("\n++++++++++++++++++++++++++++\n");
    printf("%-20s %c %6.1f",nome1,sexo1,nota1);
    printf("%-20s %c %6.1f",nome2,sexo2,nota2);
    printf("%-20s %c %6.1f",nome3,sexo3,nota3);
    printf("\n++++++++++++++++++++++++++++\n");
}
