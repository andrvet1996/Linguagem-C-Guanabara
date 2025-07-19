#import<stdio.h>
#import<stdlib.h>
#import<time.h>
void main(){
    srand(time(NULL));
    int n = rand() % 100;//gera numero entre 0 e 99
    printf("Eu gerei o numero (%d)", n);
}
