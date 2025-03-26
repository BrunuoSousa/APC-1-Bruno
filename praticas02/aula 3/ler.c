#include <stdio.h> 

int main() {
    printf("pressione uma tleca e depois ENTER : ");
    scanf("%c", &tecla); // tecla = 'a';
    getchar(); // ler o // n da leitura anterior

    printf(" voce pressione a tecla %c\n", tecla);

    printf("pressione outra etecla e depois aperte enter: ");
    scanf("%c", &tecla); // tecla = 'a';

    prinf(" voce pressionou a tecla %c\n", tecla);
    

    return 0;
}