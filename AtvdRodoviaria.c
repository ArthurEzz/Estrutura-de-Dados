#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// definindo variáveis, structs...

char modelo[6][30] = {
    "Marcopolo G8","New G7","Busscar","Paradiso 1050 G8","Paradiso 1800 DD G8"
};;

typedef struct {
    char modelo[50];
    char marca[20];
    int assentos;
    float preco;
    int ano;

}onibus;

typedef struct {
    char nome[60];
    int idade;
}cadastro;


//execução principal do código

int main() {
    setlocale(LC_ALL, "");

    //definindo as várias variáveis inteiras que eu usei

    int opcaoonibus;
    int opcaoinformacao;
    int opcaofinal;
    int cidade;
    float multi;
    char nomecidade[30];
    int opcaoEU;
    int onibusEscolhido=0;
    int horas;
    int selecao;
    int km;
    char horario[6][6] = {"02:00", "06:00", "10:00", "14:00", "18:00", "22:00"};





    cadastro usuario;

    //dando valor para os ônibus da struct "onibus"

    onibus infoonibus[5] = {
        {"Marcopolo G8", "Marcopolo", 50, 150, 2021},
        {"New G7", "Marcopolo", 48, 100,2018},
        {"Busscar", "Busscar", 48, 90, 2017},
        {"Paradiso 1050 G8", "Marcopolo", 50, 130, 2021},
        {"Paradiso 1800 DD G8", "Marcopolo", 60, 250, 2021}
    };


    //tela de cadastro

    printf("\n-- Seja Bem vindo ao Sistema da Rdoviaria --\n");
    printf("\n Primeiro, faca o seu cadastro");

    printf("\n Nome: ");
    fgets(usuario.nome, 60, stdin);
    usuario.nome[strcspn(usuario.nome, "\n")] = '\0';

    printf("\n Idade: ");
    scanf("%d", &usuario.idade);

  if (usuario.idade < 16) {
      printf("\n Voce precisa ser maior de 16 anos para acessar o nosso sistema...");
      exit(1);
      }


    else {


        //printf("\nEsse e o preco para ir a %s:%.2f", nomecidade, infoonibus[4].preco*multi);

        //Tela principal do sistema

        do {
            printf("\n===== Sistema de Rodoviaria =====");
            printf("\n1. Informacoes sobre os Onibus");
            printf("\n2. Escolher a sua passagem");
            printf("\n3. Suas informacoes");
            printf("\n4. Efetuar o pagamento");
            printf("\n5. Fechar sistema\n");
            scanf("%d" , &opcaofinal);
            getchar();

            switch (opcaofinal) {
                //Tela para informar as características dos ônibus

                case 1:
                    do {
                        printf("\n===== Tela das informacoes de cada onibus =====");
                        for (int i = 0; i < 5; i++) {
                            printf("\nMODELO: %s | MARCA: %s | ASSENTOS: %d | Valor: R$ %.2f | ANO: %d\n",
                                infoonibus[i].modelo, infoonibus[i].marca, infoonibus[i].assentos, infoonibus[i].preco, infoonibus[i].ano);
                        }
                        printf("\nPressione 1 para voltar\n");
                        scanf("%d",&opcaoinformacao);
                        getchar();

                    }while (opcaoinformacao != 1);
                    break;


                    //Tela para selecionar o ônibus desejado

                case 2:
                    printf("\n===== TELA DA PASSAGEM =====");

                    do {
                        selecao = 0;
                        printf("\nEscolha algum onibus:");
                        printf("\n1. Marcopolo G8 | Assentos: %d", infoonibus[0].assentos);
                        printf("\n2. New G7 | Assentos: %d", infoonibus[1].assentos);
                        printf("\n3. Busscar | Assentos: %d", infoonibus[2].assentos);
                        printf("\n4. Paradoso 1050 G8 | Assentos: %d", infoonibus[3].assentos);
                        printf("\n5. Paradiso 1800 DD G8 | Assentos: %d\n", infoonibus[4].assentos);
                        scanf("%d",&opcaoonibus);
                        getchar();



                        switch (opcaoonibus) {
                            case 1:
                                if (onibusEscolhido == 1) {
                                    printf("\nVoce ja escolheu este onibus\n");
                                    break;
                                }
                                else {
                                    onibusEscolhido = 1;
                                    printf("\nVoce escolheu este onibus: %s\n", modelo[0]);
                                    infoonibus[0].assentos = infoonibus[0].assentos - 1;
                                    selecao = 1;
                                }
                                break;
                            case 2:
                                if (onibusEscolhido == 2) {
                                    printf("\nVoce ja escolheu este onibus\n");
                                }
                                else {
                                    onibusEscolhido = 2;
                                    printf("\nVoce escolheu este onibus: %s\n", modelo[1]);
                                    infoonibus[1].assentos = infoonibus[1].assentos - 1;
                                    selecao = 1;
                                }
                                break;
                            case 3:
                                if (onibusEscolhido == 3) {
                                    printf("\nVoce ja escolheu este onibus\n");
                                }
                                else {
                                    onibusEscolhido = 3;
                                    printf("\nVoce escolheu este onibus: %s\n", modelo[2]);
                                    infoonibus[2].assentos = infoonibus[2].assentos - 1;
                                    selecao = 1;
                                }
                                break;
                            case 4:
                                if (onibusEscolhido == 4) {
                                    printf("\nVoce ja escolheu este onibus\n");
                                }
                                else {
                                    onibusEscolhido = 4;
                                    printf("\nVoce escolheu este onibus: %s\n", modelo[3]);
                                    infoonibus[3].assentos = infoonibus[3].assentos - 1;
                                    selecao = 1;
                                }
                                break;
                            case 5:
                                if (onibusEscolhido == 5) {
                                    printf("\nVoce ja escolheu este onibus\n");
                                }
                                else {
                                    onibusEscolhido = 5;
                                    printf("\nVoce escolheu este onibus: %s\n", modelo[4]);
                                    infoonibus[4].assentos = infoonibus[4].assentos - 1;
                                    selecao = 1;
                                }
                                break;

                        }

                    }while (selecao == 0);
                    selecao = 0;

                    //Sugerindo cidades para o usuário

                    do {
                        printf("\nQual cidade voce planeja ir?: ");
                        printf("\n1. Sao Paulo");
                        printf("\n2. Curitiba");
                        printf("\n3. Balneario Camboriu");
                        printf("\n4. Brasilia");
                        printf("\n5. Fortaleza\n");
                        scanf("%d",&cidade);
                        getchar();
                        switch (cidade) {
                            case 1:
                                multi = 1;
                                strcpy(nomecidade, "Sao Paulo");
                                km = 370;
                                selecao = 1;
                                break;
                            case 2:
                                multi = 1.2;
                                strcpy(nomecidade, "Curitiba");
                                km = 410;
                                selecao = 1;
                                break;
                            case 3:
                                multi = 1.3;
                                strcpy(nomecidade, "Balneario Camboriu");
                                km = 630;
                                selecao = 1;
                                break;
                            case 4:
                                multi = 1.5;
                                strcpy(nomecidade, "Brasilia");
                                km = 1000;
                                selecao = 1;
                                break;
                            case 5:
                                multi = 1.7;
                                strcpy(nomecidade, "Fortaleza");
                                km = 3000;
                                selecao = 1;
                                break;
                        }
                    }while (selecao == 0);


                    //Sugerindo horários para o usuário

                    do {
                        selecao = 0;
                        printf("\nHorarios disponiveis:");
                        printf("\n 1- 02:00\n 2- 06:00\n 3- 10:00\n 4- 14:00\n 5- 18:00\n 6- 22:00\n");
                        printf("\nSelecione o melhor horario para voce:\n");
                        scanf("%d",&horas);
                        getchar();

                        switch (horas) {
                            case 1:
                                printf ("\nHorario marcado para as %s\n", horario[0]);
                                selecao = 1;
                                break;

                            case 2:
                                printf ("\nHorario marcado para as %s\n", horario[1]);
                                selecao = 1;
                                break;

                            case 3:
                                printf ("\nHorario marcado para as %s\n", horario[2]);
                                selecao = 1;
                                break;

                            case 4:
                                printf ("\nHorario marcado para as %s\n", horario[3]);
                                selecao = 1;
                                break;

                            case 5:
                                printf ("\nHorario marcado para as %s\n", horario[4]);
                                selecao = 1;
                                break;

                            case 6:
                                printf ("\nHorario marcado para as %s\n", horario[5]);
                                selecao = 1;
                                break;

                        }
                    }while (selecao == 0);

                    printf("\nPassagem feita com sucesso!\n");
                    printf("\nVoltando para a tela principal...\n");
                    break;

                //Tela para listar tudo o que o usuário informou ao sistema até agora

                  case 3:
                    do {
                    printf("\n===== Suas Informacoes =====");

                    printf("\n\n--- Seu Cadastro ---");
                    printf("\nSeu Nome: %s", usuario.nome);
                    printf("\nSua Idade: %d", usuario.idade);

                    printf("\n\n--- Sua Viagem ---");
                    printf("\nCidade Destinada: %s", nomecidade);
                    printf("\nMarcado para o horario: %s", horario[horas-1]);

                    printf("\n\n--- Seu Onibus ---");
                    if (onibusEscolhido < 1 || onibusEscolhido > 5) {
                        printf("\nVoce ainda nao escolheu nenhum onibus para viajar.");
                    }
                    else {
                        printf("\nOnibus escolhido: %s", infoonibus[onibusEscolhido - 1].modelo);
                        printf("\nMarca do onibus: %s", infoonibus[onibusEscolhido - 1].marca);
                        printf("\nAssentos disponiveis no onibus: %d", infoonibus[onibusEscolhido - 1].assentos);
                        printf("\nPreco do onibus: %.2f", infoonibus[onibusEscolhido - 1].preco);
                        printf("\nAno de lancamento do onibus: %d", infoonibus[onibusEscolhido - 1].ano);


                    }

                    printf("\n\nPressione 1 para voltar\n");
                    scanf("%d",&opcaoEU);
                    getchar();
                    }while (opcaoEU != 1);
                    break;

                case 4:
                    if (onibusEscolhido < 1 || onibusEscolhido > 5) {
                        printf("\nVoce ainda nao escolheu nenhum onibus para viajar.\n");
                        break;
                    }
                    int sim;
                    int precofinal = (infoonibus[onibusEscolhido - 1].preco * multi);
                    printf("\n===== Tela de Pagamento =====");
                    printf("\nPreco do onibus escolhido: %.2f + a distancia de Ourinhos ate %s: %d quilometros\n",
                    infoonibus[onibusEscolhido - 1].preco, nomecidade, km);
                    printf("\nResulta em um valor total de: %d\n", precofinal);
                    printf("\nAceita efetuar o pagamento?");
                    printf("\n1- Sim \n2- Nao\n");
                    scanf("%d",&sim);
                    getchar();
                    if (sim == 1) {
                        printf("\nPagamento efetuado com sucesso!\nTenha uma otima viagem!\n\n");
                    }
                    else {
                        printf("\nUma pena. Ate a proxima!\n");
                    }



                    break;
            }


        }while(opcaofinal != 5);

    }
    return 0;

}