#include <stdio.h>   //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel pelas strings

int registrar() //fun��o respons�vel por cadastrar usu�rios no sistema
{
	
	//inicio cria��o de vari�vels/strings
	
	setlocale(LC_ALL, "Portuguese");
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	char pais[40];
	char estado[40];
	char cidade[40];
	char cep[40];
	
	//final cria��o de vari�vels/strings
	
	printf("Digite o CPF do aluno a ser cadastrado: \n"); //coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se �s strings (salva a string)
		
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //abre o arquivo para inserir dados (w de write)
	fprintf(file, cpf); // define qual a vari�vel que ser� a principal
	fclose (file); //Fechar o arquivo
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, "\nNome: ");
	fclose(file);
	
	printf("Digite o nome do aluno a ser cadastrado: \n");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, "\nSobrenome: ");
	fclose(file);
	
	printf("Digite o sobrenome do aluno a ser cadastrado: \n");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, "\nCargo: ");
	fclose(file);
	
	printf("Digite o cargo do aluno a ser cadastrado: \n");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, cargo);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, "\nPa�s: ");
	fclose(file);
	
	printf("Digite o pa�s do aluno a ser cadastrado: \n");
	scanf("%s", pais);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, pais);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, "\nEstado: ");
	fclose(file);
	
	printf("Digite o estado do aluno a ser cadastrado: \n");
	scanf("%s", estado);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, estado);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, "\nCidade: ");
	fclose(file);
	
	printf("Digite a cidade do aluno a ser cadastrado: \n");
	scanf("%s", cidade);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, cidade);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, "\nCEP: ");
	fclose(file);
	
	printf("Digite o CEP do aluno a ser cadastrado: \n");
	scanf("%s", cep);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, cep);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informa��o inserida
	fprintf(file, "\n");
	fclose(file);
	
	system("pause");
	
}

int pesquisar()
{

	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo [200];
	
	printf("Digite o CPF do aluno: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r"); //ler o arquivo a partir do dado inserido
	
	if(file == NULL) //se nao encontrar no banco de dados, retornar a mensagem abaixo
	{
		printf("Aluno n�o localizado\n"); //mensagem a ser retornada para o usu�rio
	}
	
	printf("\nEssas s�o as informa��es do aluno portador do CPF: ");
	
	while (fgets(conteudo, 200, file) != NULL)
	{
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
}

int excluir()
{
	char cpf[40];
	
	printf("Digite o CPF do aluno a ser exclu�do: ");
	scanf("%s", cpf);
	
		FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	
	{
	printf("Aluno n�o localizado\n");
	system("pause");
	}
	
	remove(cpf);
	
	if(file != NULL)
	
	{
	printf("Aluno exclu�do com sucesso! \n");
	system("pause");
	}
	
	
}

int main ()
{
	int opcao=0; //definindo variaveis
	int x=1;
	
	for (x=1;x=1;x++)
			{
			
		system("cls");
	
		setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	
	
		printf("### EBAC - Rela��o de Alunos TI do Zero ao Pro ###\n\n"); //inicio do menu
		printf("## Turma Dezembro 2023 ##\n\n");
		printf("# Manunten��o de Cadastro de Alunos #\n\n");
		printf("Encontre a op��o desejada no menu:\n\n");
		printf("\t1 Registrar alunos\n");
		printf("\t2 Pesquisar alunos\n");
		printf("\t3 Excluir alunos\n\n");
		printf("Op��o: "); //fim do menu
	
		scanf ("%d", &opcao); // armazenando a escolha do usuario
	
		system ("cls"); //responsavel por limpar a tela (cls = clear)
		
		switch (opcao)
		{
			case 1:
			registrar(); //chamada de fun��es
			break;
			
			case 2:
			pesquisar(); //chamada de fun��es
    		break;
    		
    		case 3:
			excluir(); //chamada de fun��es
	    	break;
	    	
	    	default:
	    	printf("Esta op��o n�o est� dispon�vel, favor escolher entre as op��es 1, 2 e 3\n"); //mensagem caso o usu�rio escolha op��o n�o dispon�vel no sistema
			system ("pause"); // fim da sele��o
			break;
		}
	
			}

}
