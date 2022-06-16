/*
	O problema consiste em elaborar um cadastro
	para 3 livros, contendo as seguintes informa��es:
	c�digo, t�tulo, autor, �rea, ano e editora.
	Desenvolver um menu com as seguintes op��es:
		1. Cadastrar os livros.
		2. Imprimir as informa��es dos livros.
		3. Pesquisar livros por c�digo.
		4. Ordenar os livros por ano.
		5. Sair do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Criando o tipo struct livro para armazenar todas as informa��es do livro.
struct livro {
	int codigo, ano;
	char titulo[50], autor[30], area[30], editora[30];
};

// V�o ser cadastrados 3 livros
struct livro cadastro[3];
int i, escolha;

// Prototipa��o das Fun��es.
void menu(void);
void cadastrarLivros(void);
void imprimirInfosLivros(void);
void pesquisarLivrosPorCodigo(void);
void ordenarLivrosPorAno(void);

// A Fun��o Principal � respons�vel por redirecionar o programa para outros Menus.
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	while (escolha != 5) {
		menu();
		
		// Tratando cada op��o.
		switch (escolha) {
			case 1 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Menu Principal > Cadastrar Livros\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a fun��o para o cadastro dos livros.
				cadastrarLivros();
				break;
			case 2 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Menu Principal > Livros Cadastrados\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a fun��o para mostrar as informa��es dos livros cadastrados.
				imprimirInfosLivros();
				break;
			case 3 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Menu Principal > Pesquisar Livros\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a fun��o para pesquisar os livros por c�digo.
				pesquisarLivrosPorCodigo();
				break;
			case 4 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Ordenando os livros por ano...\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a fun��o que ordena os livros por ano.
				ordenarLivrosPorAno();
				break;
			case 5 :
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| Saindo...\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
			
				// Chamando a fun��o de para encerrar o programa com �xito.
				exit(EXIT_SUCCESS);
				break;
			default:
				system("cls");
			
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf("| ERRO: Digite uma escolha v�lida.\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
				system("pause");
				system("cls");
				break;
		}
	}
	
	return (0);
}

// Fun��o do Menu Principal.
void menu(void) {
	// Mostrando todas as op��es.
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	printf(":::::::::::::::::MENU PRINCIPAL::::::::::::::\n");
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| 1. Cadastrar os livros.\n");
	printf("| 2. Imprimir as informa��es dos livros.\n");
	printf("| 3. Pesquisar livros por c�digo.\n");
	printf("| 4. Ordenar os livros por ano.\n");
	printf("| 5. Sair do programa.\n");
	printf("::ESCOLHA::: ");
	scanf("%d", &escolha);
	fflush(stdin);
	
	return;
}

// Fun��o Cadastro de Livros.
void cadastrarLivros(void) {
	// Fazendo o cadastro dos livros.
	for (i=0; i<3; i++) {
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("::::::::::::::CADASTRAR LIVROS::::::::::::::::\n");
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		
		printf("| C�digo: ");
		scanf("%d", &cadastro[i].codigo);
		fflush(stdin);
		
		printf("| T�tulo: ");
		gets(cadastro[i].titulo);
		fflush(stdin);
		
		printf("| Autor: ");
		gets(cadastro[i].autor);
		fflush(stdin);
		
		printf("| �rea: ");
		gets(cadastro[i].area);
		fflush(stdin);
		
		printf("| Ano: ");
		scanf("%d", &cadastro[i].ano);
		fflush(stdin);
		
		printf("| Editora: ");
		gets(cadastro[i].editora);
		fflush(stdin);
		
		system("cls");
	}
	
	// Redirecionando para o Menu.
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Retornando ao Menu Principal...\n");
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	system("pause");
	system("cls");
	
	return;
}

// Fun��o de exibi��o dos livros cadastrados.
void imprimirInfosLivros(void) {
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf(":::::::::::::LIVROS CADASTRADOS:::::::::::::::\n");
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("----------------------------------------------\n");
	
	// Mostrando os informa��es dos livros que est�o cadastrados.
	for (i=0; i<3; i++) {
		printf("\n| C�digo: %d", cadastro[i].codigo);
		
		printf("\n| T�tulo: ");
		puts(cadastro[i].titulo);
		
		printf("| Autor: ");
		puts(cadastro[i].autor);
		
		printf("| �rea: ");
		puts(cadastro[i].area);
		
		printf("| Ano: %d", cadastro[i].ano);
		
		printf("\n| Editora: ");
		puts(cadastro[i].editora);
		
		printf("\n----------------------------------------------\n");
	}
	system("pause");
	system("cls");
	
	// Redirecionando para o Menu.
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Retornando ao Menu Principal...\n");
	printf(":::::::::::::::::::::::::::::::::::::::::::::\n");
	system("pause");
	system("cls");
	
	return;
}

// Fu��o para fazer uma pesquisa de livros pelo c�digo.
void pesquisarLivrosPorCodigo(void) {
	int busca, acha;
	
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("::::::::::::::PESQUISAR LIVROS::::::::::::::::\n");
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("::Digite o c�digo do livro::: ");
	scanf("%d", &busca);
	
	i = 0;
	acha = 0;
	
	// Buscando o livro de c�digo "busca".
	while (acha==0 && i<3) {
		// Se a busca for igual ao c�digo.
		if (cadastro[i].codigo == busca) {
			// Achou!
			acha = 1;
		} else {
			// Se n�o achar, incrementa.
			i++;
		}
	}
	
	if (acha == 1) {
		// Mostrando qual livro foi achado.
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("| Livro encontrado: ");
		puts(cadastro[i].titulo);
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		system("pause");
		system("cls");
		
		// Mostrando todos as informa��es do livro.
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("| Mais informa��es do livro ");
		puts(cadastro[i].titulo);
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("----------------------------------------------\n");
		
		printf("\n| C�digo: %d", cadastro[i].codigo);
		
		printf("\n| T�tulo: ");
		puts(cadastro[i].titulo);
		
		printf("| Autor: ");
		puts(cadastro[i].autor);
		
		printf("| �rea: ");
		puts(cadastro[i].area);
		
		printf("| Ano: %d", cadastro[i].ano);
		
		printf("\n| Editora: ");
		puts(cadastro[i].editora);
		printf("\n----------------------------------------------\n");
		system("pause");
		system("cls");
		
		// Redirecionando para o Menu.
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("| Retornando ao Menu Principal...\n");
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		system("pause");
		system("cls");
	} else {
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("| N�o foi encontrado nenhum livro.\n");
		printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
		system("pause");
		system("cls");
	}
	
	return;
}

// Fun��o para ordenar os livros por ano.
void ordenarLivrosPorAno(void) {
	struct livro troca[3];
	int j;
	
	// Colocando os livros na ordem do mais antigo ao mais novo.
	for (i=0; i<2; i++) {
		for (j=i+1; j<3; j++) {
			// Se o ano do primeiro livro for mair que o ano do segundo livro.
			if (cadastro[i].ano > cadastro[j].ano) {
				/*
					Todas as informa��es do vetor "cadastro" s�o guardadas
					no vetor do mesmo tipo (livro) "troca".
				*/
				troca[i] = cadastro[i];
				/*
					Todas as informa��es do livro com ano menor s�o guardados
					em primeiro lugar.
				*/
				cadastro[i] = cadastro[j];
				/*
					Enquanto, no segundo lugar, v�o as informa��es que estavam
					em primeiro lugar, que est�o no vetor "troca".
				*/
				cadastro[j] = troca[i];
			}
		}
	}
	
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Livros ordenados por ano.\n");
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	system("pause");
	system("cls");
	
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("| Retornando ao Menu Principal...\n");
	printf("::::::::::::::::::::::::::::::::::::::::::::::\n");
	system("pause");
	system("cls");
	
	return;
}
