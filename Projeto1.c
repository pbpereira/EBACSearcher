#include <stdio.h>   //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço de memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável pelas strings

int registrar() //função responsável por cadastrar usuários no sistema
{
	
	//inicio criação de variávels/strings
	
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
	
	//final criação de variávels/strings
	
	printf("Digite o CPF do aluno a ser cadastrado: \n"); //coletando informação do usuário
	scanf("%s", cpf); //%s refere-se às strings (salva a string)
		
	strcpy(arquivo, cpf); //Responsável por copiar os valores das strings
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //abre o arquivo para inserir dados (w de write)
	fprintf(file, cpf); // define qual a variável que será a principal
	fclose (file); //Fechar o arquivo
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, "\nNome: ");
	fclose(file);
	
	printf("Digite o nome do aluno a ser cadastrado: \n");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, "\nSobrenome: ");
	fclose(file);
	
	printf("Digite o sobrenome do aluno a ser cadastrado: \n");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, "\nCargo: ");
	fclose(file);
	
	printf("Digite o cargo do aluno a ser cadastrado: \n");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, cargo);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, "\nPaís: ");
	fclose(file);
	
	printf("Digite o país do aluno a ser cadastrado: \n");
	scanf("%s", pais);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, pais);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, "\nEstado: ");
	fclose(file);
	
	printf("Digite o estado do aluno a ser cadastrado: \n");
	scanf("%s", estado);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, estado);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, "\nCidade: ");
	fclose(file);
	
	printf("Digite a cidade do aluno a ser cadastrado: \n");
	scanf("%s", cidade);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, cidade);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, "\nCEP: ");
	fclose(file);
	
	printf("Digite o CEP do aluno a ser cadastrado: \n");
	scanf("%s", cep);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
	fprintf(file, cep);
	fclose(file);
	
	file = fopen(arquivo, "a"); //acessa o arquivo para atualizar com a informação inserida
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
		printf("Aluno não localizado\n"); //mensagem a ser retornada para o usuário
	}
	
	printf("\nEssas são as informações do aluno portador do CPF: ");
	
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
	
	printf("Digite o CPF do aluno a ser excluído: ");
	scanf("%s", cpf);
	
		FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	
	{
	printf("Aluno não localizado\n");
	system("pause");
	}
	
	remove(cpf);
	
	if(file != NULL)
	
	{
	printf("Aluno excluído com sucesso! \n");
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
	
	
		printf("### EBAC - Relação de Alunos TI do Zero ao Pro ###\n\n"); //inicio do menu
		printf("## Turma Dezembro 2023 ##\n\n");
		printf("# Manuntenção de Cadastro de Alunos #\n\n");
		printf("Encontre a opção desejada no menu:\n\n");
		printf("\t1 Registrar alunos\n");
		printf("\t2 Pesquisar alunos\n");
		printf("\t3 Excluir alunos\n\n");
		printf("Opção: "); //fim do menu
	
		scanf ("%d", &opcao); // armazenando a escolha do usuario
	
		system ("cls"); //responsavel por limpar a tela (cls = clear)
		
		switch (opcao)
		{
			case 1:
			registrar(); //chamada de funções
			break;
			
			case 2:
			pesquisar(); //chamada de funções
    		break;
    		
    		case 3:
			excluir(); //chamada de funções
	    	break;
	    	
	    	default:
	    	printf("Esta opção não está disponível, favor escolher entre as opções 1, 2 e 3\n"); //mensagem caso o usuário escolha opção não disponível no sistema
			system ("pause"); // fim da seleção
			break;
		}
	
			}

}
