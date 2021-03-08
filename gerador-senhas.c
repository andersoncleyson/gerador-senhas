#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
        int i, passwdSize, value, count, j;

        srand((unsigned)time(NULL));

        printf("========| PASSWORD GENERATOR |========\n\n");
        printf("Digite o número de senhas: ");
        scanf("%d", &count);
        printf("\nDigite o tamanho da senha: ");
        scanf("%d", &passwdSize);

        for(j = 1; j < count; j++){
                printf("[%d] ", j);
                for(i = 0; i < passwdSize; i++){
                        value = 33 + (rand() % 93);
                        printf("%c", value);
                }
                printf("\n");
        }

        printf("\n");
        printf("---------| by AND3RS0N C1EY20N |---------\n");

}
