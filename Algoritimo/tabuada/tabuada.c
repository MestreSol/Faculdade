#include<stdio.h>
int main(){

    int tabuada = 0;

    printf("Digite a tabuada desejada:");
    scanf("%d", &tabuada);

    for(int x = 1; x<=10; ++x){
        printf("%dx%d = %d\n", x, tabuada, x * tabuada);
    }
    getch();
}
