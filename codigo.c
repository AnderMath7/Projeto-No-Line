#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char nomeTitular[100], cpfTitular[20], dataValidade[7], numeroCartao[50], ddd[2], numeroTelefone[10], cpf[20], nome[100], dataNasc[10], email[100], senha[20], resposta;
	int count = 0;
	int plano = 0, qtdTotal = 0, qtdIngresso1 = 0, qtdIngresso2 = 0, qtdIngresso3 = 0, qtdIngresso4 = 0, qtdIngresso5 = 0, qtdIngresso6 = 0;
    float vlrTotal = 0, vlrIngresso1 = 70, vlrIngresso2 = 50, vlrIngresso3 = 35, vlrIngresso4 = 130, vlrIngresso5 = 180, vlrIngresso6 = 20;
    char concluir = 's', answer;
	
	printf("+------------------------------------------------+\n");
	printf("|            PREENCHA AS INFORMA��ES             |\n");
	printf("+------------------------------------------------+\n\n");
	printf("Nome: ");
	fgets(nome, 100, stdin);
	printf("CPF: ");
	scanf("%s", &cpf);
	printf("Data de nascimento: ");
	scanf("%s", &dataNasc);
	printf("Vincule um e-mail a esta conta: ");
	scanf("%s", &email);
	printf("Cria uma senha: ");
	scanf("%s", &senha);
	printf("DDD: ");
	scanf("%s", &ddd);
	printf("N�mero de telefone: ");
	scanf("%s", &numeroTelefone);
		fflush(stdin);


	printf("================================");
	printf("\nNome: %s", nome);
	printf("Data de Nascimento: %s", dataNasc);
	printf("\nE-mail: %s", email);
	printf("\nCPF: %s", cpf);
	printf("\nSenha: %s", senha);
	printf("\n================================\n");
	printf("\nDados cadastrados com sucesso!\n\n");
	
	printf("\n================================");
	printf("\nN�mero: %s %s", ddd, numeroTelefone);
	printf("\n================================\n");
	printf("\nN�mero de Telefone cadastrado com sucesso!\n\n");
	
	printf("\nConta criada com sucesso... ");
	
	count=0;
	do{
		if(count>0){
			printf("Resposta inv�lida, por favor digite s, para sim ou n, para n�o! ");
			scanf("%s",&resposta);
		}else{
			printf("Deseja cadastrar um cart�o agora?(s/n) ");
			scanf("%s",&resposta);
		}
	count++;
	}while(resposta!='s' && resposta!='n');
	
	if(resposta=='s'){
		
		printf("Digite o n�mero do cart�o: ");
		scanf(" %[^\n]s",&numeroCartao);
		
		printf("Digite o nome do titular do cart�o: ");
		scanf(" %[^\n]s",&nomeTitular);
		
		printf("Validade do cart�o: ");
		scanf("%s",&dataValidade);
		
		printf("\n================================");
		printf("\nN�mero do Cart�o: %s", numeroCartao);
		printf("\nData de Validade: %s", dataValidade);
		printf("\nNome do Titular: %s", nomeTitular);
		printf("\n================================\n");
		printf("\nCart�o cadastrado com sucesso!\n\n");
	}else{
		printf("Tudo bem! Voc� pode cadastrar mais tarde! \n");
	}

	printf("Voc� gostaria de iniciar suas compras? (s/n) ");
	scanf(" %c",&answer);
	
	if(answer=='s'){
		 do {
        printf("[1] Passaporte Individual\n[2] Meia entrada\n[3] Passaporte Promocional\n[4] Combo Encantado (2 pessoas)\n[5] Combo Espetacular (3 pessoas)\n[6] Bilhete Singular\n[0] CANCELAR COMPRA\n");
        printf("\nqual plano voc� quer? ");
        scanf("%d", &plano);
        printf("\n");

        if(plano == 0){
            printf("ESCOLHA CANCELADA COM SUCESSO!!!\n");
                concluir = 's';
        }else{
            switch (plano) {

            case 1:
                printf("\nvoc� selecionou: Passaporte Individual\n");
                printf("o valor do Passaporte Individual �: R$%.2f \n", vlrIngresso1);
                printf("Quantas unidades voc� deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso1);
                vlrIngresso1 = vlrIngresso1 * qtdIngresso1;
                qtdTotal += qtdIngresso1;
                vlrTotal += vlrIngresso1;
                if (qtdIngresso1 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 2:
                printf("voc� selecionou: Meia Entrada\n");
                printf("o valor da Meia Entrada �: R$%.2f \n", vlrIngresso2);
                printf("Quantas unidades voc� deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso2);
                vlrIngresso2 = vlrIngresso2 * qtdIngresso2;
                qtdTotal += qtdIngresso2;
                vlrTotal += vlrIngresso2;
                if (qtdIngresso2 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 3:
                printf("voc� selecionou: Passaporte Promocional\n");
                printf("o valor do Passaporte Promocional �: R$%.2f \n", vlrIngresso3);
                printf("Quantas unidades voc� deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso3);
                vlrIngresso3 = vlrIngresso3 * qtdIngresso3;
                qtdTotal += qtdIngresso3;
                vlrTotal += vlrIngresso3;
                if (qtdIngresso3 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 4:
                printf("voc� selecionou: Combo Encantado\n");
                printf("o valor do Combo Encantado �: R$%.2f \n", vlrIngresso4);
                printf("Quantas unidades voc� deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso4);
                vlrIngresso4 = vlrIngresso4 * qtdIngresso4;
                qtdTotal += qtdIngresso4;
                vlrTotal += vlrIngresso4;
                if (qtdIngresso4 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 5:
                printf("voc� selecionou: Combo Espetacular\n");
                printf("o valor do Combo Espetacular �: R$%.2f \n", vlrIngresso5);
                printf("Quantas unidades voc� deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso5);
                vlrIngresso5 = vlrIngresso5 * qtdIngresso5;
                qtdTotal += qtdIngresso5;
                vlrTotal += vlrIngresso5;
                if (qtdIngresso5 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            case 6:
                printf("voc� selecionou: Bilhete Singular\n");
                printf("o valor do Bilhete Singular �: R$%.2f \n", vlrIngresso6);
                printf("Quantas unidades voc� deseja adquirir (0 para cancelar)? ");
                scanf("%d", &qtdIngresso6);
                vlrIngresso6 = vlrIngresso6 * qtdIngresso6;
                qtdTotal += qtdIngresso6;
                vlrTotal += vlrIngresso6;
                if (qtdIngresso6 != 0) {
                    printf("\nPRODUTO ADICIONADO COM SUCESSO!!!\n");
                }
                else {
                    printf("\nPRODUTO CANCELADO COM SUCESSO!!!\n");
                };

                break;

            default:
                printf("Escolha somente entre as op��es 0, 1, 2, 3, 4, 5 e 6!");
                break;
        }
        printf("\nDeseja concluir a sua compra (s/n)? ");
        scanf(" %c", &concluir);
        printf("\n-----------------------------------------------------------\n");
        }
        
    } while (concluir == 'n');

    
    if (qtdIngresso1 != 0) {
        printf("Voc� adquiriu %d Passaporte(s) Individual(is), no total de R$%.2f\n", qtdIngresso1, vlrIngresso1);
    };
    if (qtdIngresso2 != 0) {
        printf("Voc� adquiriu %d Meia(s) Entrada(s), no total de R$%.2f\n", qtdIngresso2, vlrIngresso2);
    };
    if (qtdIngresso3 != 0) {
        printf("Voc� adquiriu %d Passaporte(s) Promocional(is), no total de R$%.2f\n", qtdIngresso3, vlrIngresso3);
    };
    if (qtdIngresso4 != 0) {
        printf("Voc� adquiriu %d Combo(s) Encantado(s), no total de R$%.2f\n", qtdIngresso4, vlrIngresso4);
    };
    if (qtdIngresso5 != 0) {
        printf("Voc� adquiriu %d Combo(s) Espetacular(es), no total de R$%.2f\n", qtdIngresso5, vlrIngresso5);
    };
    if (qtdIngresso6 != 0) {
        printf("Voc� adquiriu %d Bilhete(s) Singular(es), no total de R$%.2f\n", qtdIngresso6, vlrIngresso6);
    };
    if (qtdTotal == 0)
    {
        printf("COMPRA CANCELADA COM SUCESSO!!!\n\n");
    } else {
        printf("\n-----------------------------------------------------------\n");
        printf("Compra finalizada!\n");
        printf("-----------------------------------------------------------\n");
        printf("\nQUANTIDADE TOTAL DE INGRESSOS: %d \n", qtdTotal);
        printf("VALOR TOTAL: R$%.2f\n\n\n", vlrTotal);
    };
	
	}else{
		printf("Obrigado, volte sempre!");
	}

   
	return 0;
}
