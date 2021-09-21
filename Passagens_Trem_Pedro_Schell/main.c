#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* PROJETO FEITO POR PEDRO HENRIQUE SCHELL*/

int main()
{
    int i=0,j=0,k=0,l=0; /* Variáveis auxiliares */
    int refazer_cadastro=0;
    int vagao,opcao=0,opcao2=0,assento[11],n_assento=0, n_exclusao_assento=0;
    char nome_passageiro[51];
    char companhia[51],horario_partida[6],horario_chegada[6];
    char prefixo[4],prefixo2[4];
    char terminal_partida[4],terminal_partida2[4];
    char terminal_chegada[4],terminal_chegada2[4];
    FILE *pont_arq;
    pont_arq=fopen("Informacoes.txt","a");
    if (pont_arq == NULL)
    {
        printf("ERRO! O arquivo não foi aberto!\n\n");
    }
    else
    {
        printf("O arquivo foi aberto com sucesso!\n\n");
    }
    while(opcao2==0)
    {
        l=0;
        system("pause");
        system("cls");
        printf("=====+- CONFIGURACAO DO SISTEMA -+=====\n\n");
        printf("Informe o nome da sua companhia ferroviaria: ");
        scanf(" %50[^\n]", companhia);
        fprintf(pont_arq,"Informações:\n\nCompanhia ferroviaria: %s\n",companhia);
        fflush(stdin);
        system("pause");
        system("cls");
        while(j==k)
        {
            printf("=====+- CONFIGURACAO DO SISTEMA -+=====\n\n");
            printf("Informe o prefixo do trem (deve ser maiusculo e so serao considerados os 3 primeiros caracteres): ");
            scanf(" %3[^\n]", prefixo);
            fflush(stdin);
            for (i=0;i<4;i++)
            {
                prefixo2[i]=toupper(prefixo[i]);
            }
            if (strcmp(prefixo2,prefixo))
            {
                printf("\nInforme um codigo maiusculo!\n");
            }
            else
                k=1;
        }


            fprintf(pont_arq,"Prefixo do trem: %s\n",prefixo);
            fflush(stdin);
            while (l==0)
            {
                system("pause");
                system("cls");
                printf("=====+- CONFIGURACAO DO SISTEMA -+=====\n\n");
                printf("Informe o numero do vagao (codigo com 3 numeros inteiros): ");
                scanf("%d", &vagao);
                if (vagao>=1 && vagao<=999)
                {
                    fprintf(pont_arq,"Numero do vagao: %d\n",vagao);
                    fflush(stdin);
                    system("pause");
                    system("cls");
                    l=1;
                }
                else
                {
                    printf("Informe um numero de vagao valido!\n\n");
                    l=0;
                }
            }


        j=0;
        k=0;
        while(j==k)
        {
            printf("=====+- CONFIGURACAO DO SISTEMA -+=====\n\n");
            printf("Informe o codigo do terminal de partida (deve ser maiusculo e so serao considerados os 3 primeiros caracteres): ");
            scanf(" %3[^\n]", terminal_partida);
            fflush(stdin);
            for (i=0;i<4;i++)
            {
                terminal_partida2[i]=toupper(terminal_partida[i]);
            }
            if (strcmp(terminal_partida2,terminal_partida))
            {
                printf("\nInforme um codigo maiusculo!\n");
            }
            else
                k=1;
            system("pause");
            system("cls");
        }


        fprintf(pont_arq,"Codigo do terminal de partida: %s\n",terminal_partida);
        fflush(stdin);
        j=0;
        k=0;
        while(j==k)
        {
            printf("=====+- CONFIGURACAO DO SISTEMA -+=====\n\n");
            printf("Informe o codigo do terminal de chegada (deve ser maiusculo e so serao considerados os 3 primeiros caracteres): ");
            scanf(" %3[^\n]", terminal_chegada);
            fflush(stdin);
            for (i=0;i<4;i++)
            {
                terminal_chegada2[i]=toupper(terminal_chegada[i]);
            }
            if (strcmp(terminal_chegada2,terminal_chegada))
            {
                printf("\nInforme um codigo maiusculo!\n");
            }
            else
                k=1;
            system("pause");
            system("cls");
        }


            fprintf(pont_arq,"Codigo do terminal de chegada: %s\n",terminal_chegada);
            fflush(stdin);
            printf("=====+- CONFIGURACAO DO SISTEMA -+=====\n\n");
            printf("Informe o horario de partida do trem (no formato hh:mm): ");
            scanf(" %5[^\n]", horario_partida);
            fprintf(pont_arq,"Horario de partida: %s\n",horario_partida);
            fflush(stdin);
            system("pause");
            system("cls");


            j=0;
            k=0;
            l=0;
            printf("=====+- CONFIGURACAO DO SISTEMA -+=====\n\n");
            printf("Informe o horario de chegada do trem (no formato hh:mm): ");
            scanf(" %5[^\n]", horario_chegada);
            fprintf(pont_arq,"Horario de chegada: %s\n\n\n",horario_chegada);
            fflush(stdin);
            refazer_cadastro=0;
            while(l==0)
            {
                system("pause");
                system("cls");
                printf("=====+- CONFIGURACAO DO SISTEMA -+=====\n\n");
                printf("Caso voce informou alguma informacao errada, tem a opcao de refazer o cadastro!\n\n");
                printf("Digite 1 para refazer o cadastro ou digite 2 caso o cadastramento esteja correto: ");
                fflush(stdin);
                scanf("%d", &refazer_cadastro);
                if (refazer_cadastro==1)
                {
                    opcao2=0;
                    l=1;
                }
                if (refazer_cadastro==2)
                {
                    opcao2=1;
                    l=1;
                }

                if (refazer_cadastro!=1 && refazer_cadastro!=2)
                {
                    printf("Informe uma opcao valida!");
                    l=0;
                }
            }


    }

        system("pause");
        system("cls");
        for (i=0;i<=10;i++)
            {
                assento[i]=0;
            }
        do
        {
            printf("=====+------------------------------+=====\n\n");
            printf("=====+- GERENCIAMENTO DE PASSAGENS -+=====\n\n");
            printf("=====+-                            -+=====\n\n");
            printf("=====+-           OPCOES           -+=====\n\n");
            printf("=====+-                            -+=====\n\n");
            printf("=====+-  EMISSAO DE PASSAGENS [1]  -+=====\n\n");
            printf("=====+-                            -+=====\n\n");
            printf("=====+- EXCLUSAO DE PASSAGENS [2]  -+=====\n\n");
            printf("=====+-                            -+=====\n\n");
            printf("=====+-   CONSULTA A OCUPACAO [3]  -+=====\n\n");
            printf("=====+-                            -+=====\n\n");
            printf("=====+-         ENCERRAR      [4]  -+=====\n\n");
            printf("=====+------------------------------+=====\n\n");

            printf("Informe qual opcao voce deseja: ");
            scanf("%d", &opcao);
            fflush(stdin);
            if(opcao==1)
            {
                j=0;
                k=0;
                system("pause");
                system("cls");
                printf("=====+-   EMISSAO DE PASSAGENS   -+=====\n\n");
                printf("Informe o nome do passageiro: ");
                scanf(" %50[^\n]", nome_passageiro);
                fflush(stdin);
                while(k==0)
                {
                    printf("\n\nInforme o assento que ele deseja: ");
                    scanf("%d", &n_assento);
                    if(n_assento>=1 && n_assento<=10)
                    {
                        n_assento=n_assento-1;
                        if(assento[n_assento]==1)
                        {
                            printf("\n\nAssento ocupado, escolha outro!");
                        }
                        else
                        {
                            printf("\n\nAssento selecionado!\n");
                            assento[n_assento]=1;
                            k=1;
                        }
                    }
                    else
                        printf("Informe um assento valido!");

                }
            }
                system("pause");
                system("cls");
                if (opcao==2)
                {
                    system("pause");
                    system("cls");
                    printf("=====+-    EXCLUSAO DE PASSAGENS    -+=====\n\n");
                    printf("Informe o assento a ser excuido do sistema: ");
                    scanf("%d", &n_exclusao_assento);
                    if (assento[n_exclusao_assento-1]==1)
                    {
                        printf("\n\nO assento %d foi excluido com sucesso!!", n_exclusao_assento);
                        assento[n_exclusao_assento-1]=0;
                    }

                    else
                        printf("\n\nO assento %d ja esta desocupado, caso necessite, escolha outro!\n\n", n_exclusao_assento);
                }
                if (opcao==3)
                {
                    system("pause");
                    system("cls");
                    printf("=====+------------------------------+=====\n\n");
                    printf("=====+-      OCUPACAO DO TREM      -+=====\n\n");
                    printf("=====+-                            -+=====\n\n");
                    printf("=====+-  LIVRE => 0 / OCUPADO => 1 -+=====\n\n");
                    printf("=====+-                            -+=====\n\n");
                    printf("=====+-  ASSENTO 1            [%d]  -+=====\n\n", assento[0]);
                    printf("=====+-  ASSENTO 2            [%d]  -+=====\n\n", assento[1]);
                    printf("=====+-  ASSENTO 3            [%d]  -+=====\n\n", assento[2]);
                    printf("=====+-  ASSENTO 4            [%d]  -+=====\n\n", assento[3]);
                    printf("=====+-  ASSENTO 5            [%d]  -+=====\n\n", assento[4]);
                    printf("=====+-  ASSENTO 6            [%d]  -+=====\n\n", assento[5]);
                    printf("=====+-  ASSENTO 7            [%d]  -+=====\n\n", assento[6]);
                    printf("=====+-  ASSENTO 8            [%d]  -+=====\n\n", assento[7]);
                    printf("=====+-  ASSENTO 9            [%d]  -+=====\n\n", assento[8]);
                    printf("=====+-  ASSENTO 10           [%d]  -+=====\n\n", assento[9]);
                    printf("=====+------------------------------+=====\n\n");
                    system("pause");
                    system("cls");
                }
        }while(opcao!=4);
        fclose(pont_arq);
    return 0;
}
