/*
    Programa em C para simular um processo de interrupção
    2015
*/

# include <stdio.h>

void rotinaDoDisco()  // Definição da função "rotinaDoDisco"
{
    printf("Atendendo solicitação ao Disco...\n");
    sleep(2); //espera dois segundos, simulando o processamento do driver

}

int main() {
    char interrupcao;
    char loop='t'; // loop recebe 't' (true)

    printf("Selecione \n \
    d - para uma interrupção de disco \n \
    s - para sair ");


while(loop != 'f'){ // enquanto a variavel loop for diferente de 'f' , faça

    printf("\n =>");
    scanf("%c",&interrupcao);

    switch(interrupcao) {
        case 'd':
            rotinaDoDisco(); // chama a função de tratamento do disco
            printf("pronto\n");
            break;
        case 's':
             loop='f';  // loop recebe 'f' (falso)
             break;
    }
    }
    printf("Fim\n");
    return 0;
}
