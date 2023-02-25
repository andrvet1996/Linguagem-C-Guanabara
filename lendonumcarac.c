#import <stdio.h>
void main(){
    char r;
    char s;
    printf("Digite só uma letra: ");
    fflush(stdin);
    //scanf("%c",&r);
    r=getchar();
    printf("Digite outra letra: ");
    fflush(stdin);
    //scanf("%c",&s);
    s =getchar();
    printf("Você digitou as letras %c e %s", r, s);
    //int n;
    //float m;
    //printf("Digite um número inteiro: ");
    //scanf("%d",&n);
    //printf("Digite um número real: ");
    //scanf("%f", &m);
    //printf("Você acabou de digitar o valor %d e %.1f",n, m);
}
