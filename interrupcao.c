/*
    Programa em C para simular um processo de interrupção
*/

# include <stdio.h>
/////////////////////////////////////////
void rotinaDoDisco()  // Definição da função "rotinaDoDisco"
{
    printf("Atendendo solicitação do Disco...\n");
    sleep(2); //espera dois segundos

}

void rotinaDaRede()  // Definição da função "rotinaDaRede"
{
    printf("Atendendo solicitação da Rede...\n");
    sleep(2); //espera dois segundos

}

void rotinaDoMouse()  // Definição da função "rotinaDoMouse"
{
    printf("Atendendo solicitação do Mouse...\n");
    sleep(2); //espera dois segundos

}

int main() {
    char interrupcao;
    char loop='t'; // loop recebe 't' (true)
    //cria o vetor de interrupções
    int vi[3] = {1, 2, 3};

    printf("Selecione \n \
    d - para uma interupção de disco \n \
    r - para uma interrupçãoda placa de Rede \n \
    m - para uma nterrupção do mouse \n \
    s - para sair ");


while(loop != 'f'){ // enquanto a variavel loop for diferente de 'f' , faça

    printf("\n =>");
    scanf("%c",&interrupcao);

    switch(interrupcao) {
        case 'd':
            rotinaDoDisco(); // chama a função de tratamento do disco
            printf("pronto\n");
            break;
        case 'r':
            rotinaDaRede();
            printf("pronto\n");
            break;
        case 'm':
            rotinaDoMouse();
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
