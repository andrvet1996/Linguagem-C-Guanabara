#include<stdio.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    //printf("Oi, \ntudo \nbem?");
    //printf("Oi, \ttudo \tbem?");
    //printf("Oi, tudo \bbem?");
    //printf("Oi, tudo \\bem?");
    //printf("Oi, tudo \abem?");
    //printf("Oi, tudo %%bem?");
    printf("C é\"super\"fácil!");
}



