#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char nomeTitular[100], cpfTitular[20], dataValidade[10], numeroCartao[50], ddd[2], numeroTelefone[20], cpf[20], nome[100], dataNasc[10], email[100], senha[20];
	
	printf("Informe seu nome: ");
	fgets(nome, 100, stdin);
	printf("Digite seu CPF: ");
	scanf("%s", &cpf);
	printf("Digite sua data de nascimento: ");
	scanf("%s", &dataNasc);
	printf("Vincule um e-mail a esta conta: ");
	scanf("%s", &email);
	printf("Cria uma senha: ");
	scanf("%s", &senha);
	printf("Digite o DDD do n�mero do seu telefone: ");
	scanf("%s", &ddd);
	printf("Infome o seu n�mero de telefone: ");
	scanf("%s", &numeroTelefone);
		fflush(stdin);
	printf("Digite o n�mero do cart�o: ");
	fgets(numeroCartao, 50, stdin); 
	printf("Digite o nome do titular do cart�o: ");
	fgets(nomeTitular, 100, stdin);
	printf("Digite a data de validade do cart�o: ");
	scanf("%s", &dataValidade);

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

	printf("\n================================");
	printf("\nN�mero do Cart�o: %s", numeroCartao);
	printf("Data de Validade: %s", dataValidade);
	printf("\nNome do Titular: %s", nomeTitular);
	printf("================================\n");
	printf("\nCart�o cadastrado com sucesso!\n\n");
	
	printf("\nConta criada com sucesso...");
	printf("\nLogue na sua conta e come�e a usar nossos servi�os!");	
}
